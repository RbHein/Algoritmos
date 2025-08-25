/* 20. Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em
um vetor com 10 posicoes. Preencha um segundo vetor apenas com os números ́ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j = 0, vetor1[10], vetor2[10];

    printf("Informe 10 valores entre 0 e 50: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 10; i++) 
    {
      if (vetor1[i] % 2 != 0) 
      {
         vetor2[j] = vetor1[i];
         j++;
      }
    }

    printf("\n Vetor Original:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor1[i]);

        if (i % 2 != 0)
        {
            printf("\n");
        }
    }

    printf("\n\nVetor Impares: \n");

    for (i = 0; i < j; i++)
    {
        printf("%d ", vetor2[i]);

        if (i % 2 != 0)
        {
            printf("\n");
        }
    }
    
    printf("\n");

    return 0;
}