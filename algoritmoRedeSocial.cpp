/* /* Algoritmo de Rede Social

Estrutura de Dados para Armazenamento de Usuários e Perfis:

Use uma árvore binária para armazenar informações dos usuários, com base em alguma chave (como ID do usuário).

Cada nó da árvore pode conter informações sobre o usuário, como nome, idade, dentre outros que achar necessário.

Gerenciamento de Amigos e Conexões:

Utilize tabelas de dispersão para armazenar conexões de amizade entre os usuários.

Cada usuário pode ter uma lista de amigos, que pode ser implementada usando uma lista encadeada ou uma fila.

Busca e Recomendações:

Implemente algoritmos BFS (Busca em Largura) e DFS (Busca em Profundidade) para encontrar conexões entre os usuários.*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>


// Struct de Informações do Usuário 
typedef struct {
    int id;
    char nome[50];
    int idade;
} Usuario;


// Struct para os Nós da Árvore Binária 
typedef struct No {
    Usuario usuario;
    struct No *esquerda;
    struct No *direita;
} No;



// Struct para Lista Encadeada - Listagem dos Amigos 
typedef struct Amigo {
    int id_amigo;
    struct Amigo *prox;
} Amigo;


// Tabela de Dispersão - Gerenciamento das Amizades
#define TAMANHO_TABELA 100
Amigo *tabela[TAMANHO_TABELA];


// Struct Fila
typedef struct {
    int items[TAMANHO_TABELA];
    int frente;
    int traseira;
} Fila;


// Lista de Funções

// Criar Fila
Fila* criarFila();

// Verificação de Fila Vazia 
bool filaVazia(Fila* fila);

// Criação de fileiras dos elementos
void enfileirar(Fila* fila, int item);

// Desenfileirar Elementos
int desenfileirar(Fila* fila);

// Busca em Profundidade - DFS - Busca de Conexões entre usuários
void dfsUtil(No* raiz, int id_alvo, bool visitado[]);

// Executar DFS 
void dfs(No* raiz, int id_inicio, int id_alvo);

// Busca em Largura - BFS - Busca de Conexões entre usuários 
void bfs(No* raiz, int id_inicio, int id_alvo);

// Criação de novo Nó na árvore 
No* criarNo(Usuario usuario);

// Inserir usuário na árvore 
No* inserirUsuario(No *raiz, Usuario usuario);

// Busca de usuário na árvore
No* buscarUsuario(No *raiz, int id);

// Adicionar Amigo na Lista
void adicionarAmigo(int id_usuario, int id_amigo);


void exibirMenu();


int main() {
    No *raiz = NULL;
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Usuario usuario;
                printf("ID: ");
                scanf("%d", &usuario.id);
                printf("Nome: ");
                scanf("%s", usuario.nome);
                printf("Idade: ");
                scanf("%d", &usuario.idade);
                raiz = inserirUsuario(raiz, usuario);
                break;
            }
            case 2: {
                int id_usuario, id_amigo;
                printf("ID Usuario: ");
                scanf("%d", &id_usuario);
                printf("ID Amigo: ");
                scanf("%d", &id_amigo);
                adicionarAmigo(id_usuario, id_amigo);
                break;
            }
            case 3: {
                int id_inicio, id_alvo;
                printf("ID Inicio: ");
                scanf("%d", &id_inicio);
                printf("ID Destino: ");
                scanf("%d", &id_alvo);
                bfs(raiz, id_inicio, id_alvo);
                break;
            }
            case 4: {
                int id_inicio, id_alvo;
                printf("ID Inicio: ");
                scanf("%d", &id_inicio);
                printf("ID Destino: ");
                scanf("%d", &id_alvo);
                dfs(raiz, id_inicio, id_alvo);
                break;
            }
            case 5:
                printf("Encerrado\n");
                break;
            default:
                printf("Invalido\n");
        }
    } while (opcao != 5);

    return 0;
}

Fila* criarFila() {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->frente = -1;
    fila->traseira = -1;
    return fila;
}

bool filaVazia(Fila* fila) {
    return (fila->traseira == -1);
}

void enfileirar(Fila* fila, int item) {
    if (fila->traseira == TAMANHO_TABELA - 1) {
        printf("Fila ocupada\n");
        return;
    }
    if (fila->frente == -1) {
        fila->frente = 0;
    }
    fila->traseira++;
    fila->items[fila->traseira] = item;
}

int desenfileirar(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila ocupada\n");
        return INT_MIN;
    }
    int item = fila->items[fila->frente];
    if (fila->frente == fila->traseira) {
        fila->frente = fila->traseira = -1;
    } else {
        fila->frente++;
    }
    return item;
}

void dfsUtil(No* raiz, int id_alvo, bool visitado[]) {
    if (raiz == NULL) {
        return;
    }

    printf("%d ", raiz->usuario.id);
    visitado[raiz->usuario.id] = true;

    if (raiz->usuario.id == id_alvo) {
        printf("\nConexao encontrada\n");
        return;
    }

    int indice = raiz->usuario.id % TAMANHO_TABELA;
    Amigo* amigo_atual = tabela[indice];
    while (amigo_atual != NULL) {
        if (!visitado[amigo_atual->id_amigo]) {
            dfsUtil(buscarUsuario(raiz, amigo_atual->id_amigo), id_alvo, visitado);
        }
        amigo_atual = amigo_atual->prox;
    }
}

void dfs(No* raiz, int id_inicio, int id_alvo) {
    if (raiz == NULL) {
        printf("Arvore vazia!\n");
        return;
    }

    bool visitado[TAMANHO_TABELA] = {false};
    dfsUtil(buscarUsuario(raiz, id_inicio), id_alvo, visitado);
}

void bfs(No* raiz, int id_inicio, int id_alvo) {
    if (raiz == NULL) {
        printf("Arvore vazia\n");
        return;
    }

    Fila* fila = criarFila();
    enfileirar(fila, id_inicio);

    bool visitado[TAMANHO_TABELA] = {false};
    visitado[id_inicio] = true;

    while (!filaVazia(fila)) {
        int id_atual = desenfileirar(fila);
        printf("%d ", id_atual);

        if (id_atual == id_alvo) {
            printf("\nConexao encontrada\n");
            return;
        }

        int indice = id_atual % TAMANHO_TABELA;
        Amigo* amigo_atual = tabela[indice];
        while (amigo_atual != NULL) {
            if (!visitado[amigo_atual->id_amigo]) {
                enfileirar(fila, amigo_atual->id_amigo);
                visitado[amigo_atual->id_amigo] = true;
            }
            amigo_atual = amigo_atual->prox;
        }
    }

    printf("\nConexao nao encontrada\n");
}

No* criarNo(Usuario usuario) {
    No *novo = (No*) malloc(sizeof(No));
    novo->usuario = usuario;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

No* inserirUsuario(No *raiz, Usuario usuario) {
    if (raiz == NULL) {
        return criarNo(usuario);
    }

    if (usuario.id < raiz->usuario.id) {
        raiz->esquerda = inserirUsuario(raiz->esquerda, usuario);
    } else if (usuario.id > raiz->usuario.id) {
        raiz->direita = inserirUsuario(raiz->direita, usuario);
    }

    return raiz;
}

No* buscarUsuario(No *raiz, int id) {
    if (raiz == NULL || raiz->usuario.id == id) {
        return raiz;
    }

    if (id < raiz->usuario.id) {
        return buscarUsuario(raiz->esquerda, id);
    } else {
        return buscarUsuario(raiz->direita, id);
    }
}

void adicionarAmigo(int id_usuario, int id_amigo) {
    int indice = id_usuario % TAMANHO_TABELA;

    Amigo *novo = (Amigo*) malloc(sizeof(Amigo));
    novo->id_amigo = id_amigo;
    novo->prox = tabela[indice];
    tabela[indice] = novo;
}

void exibirMenu() {
    printf("\nMenu:\n");
    printf("1. Adicionar usuario\n");
    printf("2. Adicionar Amigo\n");
    printf("3. Buscar Conexao em Largura (BFS)\n");
    printf("4. Buscar Conexao em Profundidade (DFS)\n");
    printf("5. Sair\n");
    printf("Escolha uma opcao: ");
}
