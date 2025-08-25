// LISTA SIMPLESMENTE ENCADEADA

#include <iostream>

#define T 3 

typedef struct s_ptr { // Nome Struct

    int x;
    s_ptr * p = NULL;
} str;

str * criaNo () { // Ponteiro
    str *atual = (str *) malloc(sizeof(str));
    printf("Digite um numero: ");
    scanf("%d", &atual -> x);
    return atual;
}

void imprimir (str *p) { 

    printf("\t%d ", p -> x );
    if (p -> p)
        imprimir (p-> p);
}

int main () {

    str *raiz, *p, *temp;
    int i;
    raiz = criaNo();
    p = raiz;

    for (i = 0; i < T; i++) {
        temp = criaNo ();
        p -> p = temp;
        p = temp;
    }


    return 0;
}
