/* Diminuir código */

#include <iostream>

typedef struct arvore {
    int numero;
    arvore *dir, *esq;
} arv;

int le_numero(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    return x;
}

arv * cria_no(int x){
    arv * temp = (arv *) malloc(sizeof(arv));
    temp->dir = NULL;
    temp->esq = NULL;
    temp->numero = x;
    return temp;
}

void imprimir(arv* atual){
    printf("%d\n", atual->numero);
    if(atual->esq){
        imprimir(atual->esq);
    }
    if(atual->dir){
        imprimir(atual->dir);
    }
}


int main() {
    arv *raiz, *atual, *proximo;
    int x;
    raiz = cria_no(le_numero());

    for(int i=0;i<4;i++) {
        x = le_numero();
        atual = raiz;
        proximo = raiz;
        while(x != atual->numero && proximo){
            atual = proximo;
            if(x < atual->numero){
                proximo = atual->esq;
            } else {
                proximo = atual->dir;
            }
        }

        x < atual->numero ? (atual->esq = cria_no(x)) : (atual->dir = cria_no(x));

    }

    imprimir(raiz);

    return 0;
}






