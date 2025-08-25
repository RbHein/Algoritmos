/* 17. Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuem 
valores negativos. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, vetor[10];

    printf("Informe 10 valores inteiros: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("Valores do Vetor: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%d \n", vetor[i]);
    }

    return 0;
}