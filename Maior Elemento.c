#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, maior, vetor[5];

    printf("Informe 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }  
    }

    printf("Maior Valor: %d\n", maior);

    return 0;

}