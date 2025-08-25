/* 11. Faça ̧a um programa que preencha um vetor com 10 números reais, calcule e mostre a ́
quantidade de números negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, qNegativos = 0;
    float somaPositivos = 0, vetor[10];

    printf("Informe 10 numeros reais: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0)
        {
            qNegativos++;
        }

        else 
        {
            somaPositivos += vetor [i];
        }
    }
    
    printf("Quantidade de Numeros Negativos: %d\n", qNegativos);
    printf("Soma dos Numeros Positivos: %.2f\n", somaPositivos);

    return 0;
}