/* 9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os
valores lidos na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, vetor [6];

    printf("Informe 6 valores pares: \n");

    for (i = 0; i < 6; i++)
    {
        do 
        { 
            scanf("%d", &vetor[i]);
        } while (vetor[i] % 2 != 0);
    }
    
    for (i = 5; i >= 0; i--)
    {
        printf("%d \n", vetor[i]);
    }
    

    return 0;
}