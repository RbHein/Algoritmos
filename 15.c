/* 15. Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando ́
repetidos. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j, k, repetidos, vetor1[20], vetor2[20];

    printf("Digite 20 numeros inteiros: \n");

    for (i = 0; i < 20; i++) 
    {
        scanf("%d", &vetor1[i]);
    }

    k = 0;

    for (i = 0; i < 20; i++) 
    {
        repetidos = 0;

        for (j = 0; j < k; j++) 
        {
            if (vetor1[i] == vetor2[j]) 
            {
                repetidos = 1;
                break;
            }
        }

        if (!repetidos) 
        {
            vetor2[k] = vetor1[i];
            k++;
        }
    }

    printf("\nVetor sem os Valores Repetidos: \n");

    for (i = 0; i < k; i++) 
    {
        printf("%d ", vetor2[i]);
    }

    printf("\n");

    return 0;
}
