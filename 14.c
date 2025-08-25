/*14. Faça um programa que leia um vetor de 10 posições e verifique se existem valores
iguais e os escreva na tela. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j, vetor[10];

    printf("Informe 10 valores inteiros: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores Iguais no Vetor: \n");

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("%d \n", vetor[i]);
            }
        }
    }
    
    return 0;
}