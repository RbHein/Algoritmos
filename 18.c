/* 18. Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, x, contador = 0, vetor[10];

    printf("Informe 10 valores inteiros: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Informe um valor inteiro X: ");
    scanf("%d", &x);

    printf("Multiplos de %d no Vetor Informado: ", x);

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % x == 0)
        {
            printf("%d \n", vetor[i]);
            contador++;
        }
    }
    
    if (contador == 0)
    {
        printf("Nao foram informados multiplos de %d", x);
    }

    return 0;
}