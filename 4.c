/* 4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y 
quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma 
dos valores encontrados nas respectivas posições X e Y . */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, x, y, soma, vetor [8];

    printf("Informe os valores do vetor: \n");

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Informe os valores de X e Y: \n");
    scanf("%d %d", &x, &y);

    soma = vetor[x] + vetor[y];

    printf("Soma dos Valores das posicoes %d e %d: %d", x, y, soma);

    return 0;
}