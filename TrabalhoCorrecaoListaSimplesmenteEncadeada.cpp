/* O algoritmo em C++ a seguir cria uma Lista Simplesmente Encadeada dos números de 10 a 13, removendo o número 10 logo em seguida.


O algoritmo disponibilizado anteriormente possuía dois erros: 


O loop de repetição da função Main incrementava incorretamente o valor dos elementos da lista, resultando em números de 10 a 14, quando o correto seria de 10 a 13.
Na função Remover, a variável anterior não estava sendo inicializada antes de ser acessada, o que poderia causar erros.


Para corrigir, foi ajustado o loop, para que execute apenas até o valor 13, removendo o número 10 em seguida. O anterior também foi inicializado como NULL, antes de utilizá-lo na função remover.


O código (funcionando de forma correta) basicamente cria uma lista e remove um número específico após imprimí-la.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 4

typedef struct strLista {
    int n;
    struct strLista *prox;
} Lista;


void imprimir(Lista *l){
    if(l){
        printf("numero %d\n",l->n);
        imprimir(l->prox);
    }
}


void remover(int n, Lista **raiz){
    Lista *atual, *anterior;
    atual = *raiz;
    while(atual->prox){
        if(atual->n == n){
            if(*raiz == atual){
                *raiz = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }
            free(atual);
            break;
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
    if(atual->n == n && !atual->prox){
        anterior->prox = NULL;
        free(atual);
    }
}


int main() {

    Lista *raiz, *atual, *temp;

    raiz = (Lista *)malloc(sizeof(Lista));
    raiz->n = 10;
    raiz->prox = NULL;
    atual = raiz;

    for(int i = 0; i < TAM - 1; i++) { // Feito ajuste no Loop para encerrar a repetição no número 13

        temp = (Lista *)malloc(sizeof(Lista));
        atual->prox = temp;
        temp->n = atual->n + 1;
        atual = temp;
    }

    imprimir(raiz);
    remover(10, &raiz);
    imprimir(raiz);

    return 0;
}
