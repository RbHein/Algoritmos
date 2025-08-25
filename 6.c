/* 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, maior = 0, menor = 0, vetor [10];

    printf("Informe 10 valores inteiros: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]); 
    }

    maior = vetor [i];
    menor = vetor[i];

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("Maior Valor: %d\n", maior);
    printf("Menor Valor: %d\n", menor);

    return 0;
}

