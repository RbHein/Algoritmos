/* 7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima ́
o vetor, o maior elemento e a posicao que ele se encontra. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, maior = 0, posicao = 0, vetor [10];

    printf("Informe 10 numeros inteiros: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor [i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Vetor: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    printf("Maior Numero: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}