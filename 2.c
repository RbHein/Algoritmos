/* 2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, valores [6];

    printf("Informe 6 valores inteiros: ");

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos: \n");

    for (i = 0; i < 6; i++) 
    {
        printf("%d\n", valores[i]);
    }

    return 0;
}