/* Trabalho Final A3 - Lista Encadeada */

#include <iostream>
using namespace std;

// IMPLEMENTAÇÃO DA CLASSE NÓ
class Nó { 
    public: 
        int valor; 
        Nó* proximo; 

        // Construtor do Nó
        Nó (int valor) : valor(valor), proximo(nullptr) {}
};


// IMPLEMENTAÇÃO DA CLASSE LISTA
class Lista { 
    private: 
        Nó* primeiro; // Ponteiro para o Primeiro Nó da Lista

    public: 

        // Construtor
        Lista() : primeiro(nullptr) {}


        // Destrutor
        ~Lista() {
        destruirLista();
        }

        // 1 - Método ADICIONAR (Final)
        void Adicionar (int valor) {
            Nó* novoNó = new Nó(valor);

            if (primeiro == nullptr) {
                primeiro = novoNó;
            }
            else {
                Nó* atual = primeiro;

                while (atual ->proximo != nullptr) {
                    atual = atual->proximo;
                } atual->proximo = novoNó;
            }
        }



        // 2 - Método ADICIONAR INÍCIO
        void adicionarInicio (int valor) {
            Nó* novoNó = new Nó(valor);
            novoNó->proximo = primeiro;
            primeiro = novoNó; 
        }


        // 3 - Método INSERIR EM POSIÇÃO ESPECÍFICA 
        void adicionarPosicao(int valor, int posicao) {
            Nó* novoNó = new Nó(valor);

            if (posicao == 0) {
                novoNó->proximo = primeiro; // Se posição 0, inserir novo nó no início
                primeiro = novoNó;
                return;
            }

            Nó* atual = primeiro;
            int index = 0;
            while (atual != nullptr && index < posicao - 1) {
                atual = atual->proximo; // Avança até a posição anterior à escolhida
                index++;
            }

            if (atual == nullptr) {
                std::cout << "Posicao invalida" << std::endl;
                return;
            }

            novoNó->proximo = atual->proximo; // Conectando o novo nó -> ao nó seguinte da posição escolhida
            atual->proximo = novoNó; // Conectando nó da posição anterior com o novo nó
        }



        // 4 - Método Remover Último
        void removerUltimo() {

            if (primeiro == nullptr) {
                std::cout << "Lista Vazia" << std::endl;
                return;
            }

            if (primeiro->proximo == nullptr) {
                delete primeiro; // Remove mesmo que exista apenas um nó na lista
                primeiro = nullptr;
                return;
            }

            Nó* atual = primeiro;
            Nó* anterior = nullptr;

            while (atual->proximo != nullptr) {
                anterior = atual;
                atual = atual->proximo; // Avançar até último nó
            }

            delete atual; // Remover último nó
            anterior->proximo = nullptr; // Nó anterior passa a ser o último nó
        }




        // 5 - Método para remover o PRIMEIRO
        void removerInicio() {

            if (primeiro == nullptr) {
                std::cout << "Lista vazia" << std::endl;
                return;
        }

            Nó* temp = primeiro;
            primeiro = primeiro->proximo; // Atualiza o primeiro nó para o próximo nó
            delete temp; // Remove o antigo primeiro nó
        }



        // 6 - Método para remover ELEMENTO ESPECÍFICO pela posição 
        void retirarPosicao(int posicao) {
        if (posicao == 0) {
            removerInicio(); // Se posição 0, removerprimeiro nó
            return;
        }

        Nó* atual = primeiro;
        int index = 0;

        while (atual != nullptr && index < posicao - 1) {
            atual = atual->proximo; // Avança até posição anterior a escolhida
            index++;
        }


        if (atual == nullptr || atual->proximo == nullptr) {
            std::cout << "Posicao invalida." << std::endl;
            return;
        }

        Nó* temp = atual->proximo;
        atual->proximo = temp->proximo; // Remove o nó da posição desejada
        delete temp;
    }



    
        // 7 - Remove um nó específico com um determinado valor
        void removerNo(int valor) {
            if (primeiro == nullptr) {
                std::cout << "Lista Vazia" << std::endl;
                return;
        }

            Nó* atual = primeiro;
            Nó* anterior = nullptr;

            if (primeiro->valor == valor) {
                primeiro = primeiro->proximo; // Se o primeiro nó tiver o valor desejado, ele é removido
                delete atual;
                return;
        }

            while (atual != nullptr && atual->valor != valor) {
                anterior = atual;
                atual = atual->proximo; // Avança até encontrar o nó com o valor desejado
        }

            if (atual == nullptr) {
                std::cout << "Nao encontrado" << std::endl;
                return;
        }

            anterior->proximo = atual->proximo; // Remove o nó com o valor desejado
            delete atual;
    }

            


        // 8 - Verificar se Lista vazia
        bool listaVazia() {
        return (primeiro == nullptr);
    }



        // 9 - Método para Encontrar Posição de um elemento

        int encontrarPosicao(int valor) {

        Nó* atual = primeiro;
        int posicao = 0;

        while (atual != nullptr) {
            if (atual->valor == valor) {
                return posicao; 
            }
            atual = atual->proximo;
            posicao++;
        }

        return -1; // Se não encontrar o elemento
    }



        // 10 - Verificar PRESENÇA de elemento
        bool contem(int valor) {
            return (encontrarPosicao(valor) != -1);
        }

        
        
        // 11 - Criar Lista: Inicializa uma nova lista
        void criarLista() {
            destruirLista(); // Destrói a atual antes de criar uma nova

        primeiro = nullptr; // Garante que o ponteiro do primeiro elemento seja nulo para indicar uma nova lista vazia
}




        // 12 - Método para liberar todos os recursos da lista
        void destruirLista() {
            Nó* atual = primeiro;

            while (atual != nullptr) {
                Nó* proximo = atual->proximo;
                delete atual;
                atual = proximo;
            }
            primeiro = nullptr; // Garante que o ponteiro do primeiro elemento seja nulo após a destruição da lista
}

   
        // EXTRA - Imprimir Lista (para verificação)
        void imprimirLista() {
            Nó* atual = primeiro;

            std::cout << "Lista Atual: ";

            while (atual != nullptr) {
                std::cout << atual->valor << " ";
                atual = atual->proximo;
            }

        }

}; 

int main() {
    Lista listaEncadeada;

    int escolha;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Adicionar no Final\n";
        std::cout << "2. Adicionar no Inicio\n";
        std::cout << "3. Adicionar em posicao especifica\n";
        std::cout << "4. Remover Ultimo\n";
        std::cout << "5. Remover Primeiro (Inicio)\n";
        std::cout << "6. Retirar de Posicao Especifica\n";
        std::cout << "7. Remover No (pelo valor)\n";
        std::cout << "8. Verificar se Lista Vazia\n";
        std::cout << "9. Encontrar Posicao de um Elemento\n";
        std::cout << "10. Verificar Presenca de Elemento\n";
        std::cout << "11. Criar/Inicializar Nova Lista)\n";
        std::cout << "12. Destruir Lista\n";
        std::cout << "13. Imprimir Lista Atual\n";
        std::cout << "0. Sair\n";

        std::cout << "Escolha um dos 12 metodos: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                int valorAdicionar;
                std::cout << "Valor a ser adicionado no final: ";
                std::cin >> valorAdicionar;
                listaEncadeada.Adicionar(valorAdicionar);
                break;
            }
            case 2: {
                int valorAdicionarInicio;
                std::cout << "Valor a ser adicionado no inicio: ";
                std::cin >> valorAdicionarInicio;
                listaEncadeada.adicionarInicio(valorAdicionarInicio);
                break;
            }
            case 3: {
                int valorAdicionarPosicao, posicaoAdicionar;
                std::cout << "Digite o valor a ser adicionado: ";
                std::cin >> valorAdicionarPosicao;
                std::cout << "Digite a posicao: ";
                std::cin >> posicaoAdicionar;
                listaEncadeada.adicionarPosicao(valorAdicionarPosicao, posicaoAdicionar);
                break;
            }
            case 4: {
                listaEncadeada.removerUltimo();
                break;
            }
            case 5: {
                listaEncadeada.removerInicio();
                break;
            }
            case 6: {
                int posicaoRetirar;
                std::cout << "Digite a posicao a ser retirada: ";
                std::cin >> posicaoRetirar;
                listaEncadeada.retirarPosicao(posicaoRetirar);
                break;
            }
            case 7: {
                int valorRemover;
                std::cout << "Digite o valor a ser removido: ";
                std::cin >> valorRemover;
                listaEncadeada.removerNo(valorRemover);
                break;
            }
            case 8: {
                if (listaEncadeada.listaVazia()) {
                    std::cout << "Lista Vazia.\n";
                } else {
                    std::cout << "Lista nao esta Vazia.\n";
                }
                break;
            }
            case 9: {
                int valorBuscar;
                std::cout << "Valor a ser buscado: ";
                std::cin >> valorBuscar;
                int posicaoEncontrada = listaEncadeada.encontrarPosicao(valorBuscar);
                if (posicaoEncontrada != -1) {
                    std::cout << "Encontrado. Posicao: " << posicaoEncontrada << "\n";
                } else {
                    std::cout << "Nao encontrado\n";
                }
                break;
            }
            case 10: {
                int valorVerificar;
                std::cout << "Valor para verificar: ";
                std::cin >> valorVerificar;
                if (listaEncadeada.contem(valorVerificar)) {
                    std::cout << "Valor presente.\n";
                } else {
                    std::cout << "Valor nao esta presente.\n";
                }
                break;
            }
            case 11: {
                listaEncadeada.criarLista();
                std::cout << "Nova lista criada.\n";
                break;
            }
            case 12: {
                listaEncadeada.destruirLista();
                std::cout << "Lista destruida.\n";
                break;
            }

            case 13:
                listaEncadeada.imprimirLista();
                break;

            case 0:
                std::cout << "Programa encerrado.\n";
                break;

            default:
                std::cout << "Erro\n";
        }

    } while (escolha != 0);

    return 0;
}
