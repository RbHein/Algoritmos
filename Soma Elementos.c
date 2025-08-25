#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, soma = 0, vetor[5];

    printf("Informe 5 valores para o vetor: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        soma += vetor[i];
    }

    printf("Soma dos Valores: %d", soma);
    

    return 0;
}