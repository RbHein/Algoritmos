// LISTA DUPLAMENTE ENCADEADA - Nó possui 3 posições [ | | ]

#include <bits/stdc++.h>

typedef struct s_str {
    
    int numero;
    s_str *anterior = NULL, *proximo = NULL;
} str;


str * criaNo () {

    str * temp = (str *) malloc(sizeof (str));

    printf("Digite um numero: \n");
    scanf("%d", &temp -> numero);
    return temp;
}
    
    // str * funcao_ultimo () {

    // }

int main () {

    str *raiz, *atual, *tmp;

    raiz = criaNo();

    atual = raiz;

    for (int i = 0; i <= 3; i++) {
        tmp = criaNo();
        tmp -> anterior = atual; // Única diferença para uma Lista Simplesmente Encadeada
        atual -> proximo = tmp;
        atual = tmp;
    }

    //LOCAL ÚLTIMA FUNÇÃO - APAGAR COMENTÁRIO LINHA ABAIXO
    // ultimo = funcao_ultimo();
    // imprimir(ultimo)
    return 0;
}