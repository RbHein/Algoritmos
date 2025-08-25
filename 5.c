/* 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, pares = 0, vetor[10];

    printf("Informe os 10 valores do Vetor: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
    }

    printf("O Vetor possui %d valores pares", pares);
    
    return 0;
}