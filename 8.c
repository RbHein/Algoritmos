/* 8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, vetor [6];

    printf("Informe 6 valores inteiros: \n");

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    for (i = 5; i >= 0; i--)
    {
        printf("%d \n", vetor[i]);
    }

    return 0;
}