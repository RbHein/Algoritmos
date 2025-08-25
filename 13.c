/* 13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posic ̧ao onde se encon- ̃
trazem o maior e o menor valor */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, maior, menor, posicaoMaior, posicaoMenor, vetor [5];

    printf("Informe 5 valores inteiros: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);

        if (i == 0)
        {
            maior = menor = vetor[i];
            posicaoMaior = posicaoMenor = i;
        }

        else
        {
            if (vetor[i] > maior)
            {
                maior = vetor[i];
                posicaoMaior = i;
            }

            if (vetor [i] < menor)
            {
                menor = vetor[i];
                posicaoMenor = i;
            }
        }
    }

    printf("Posicao do Maior Valor: %d\n", posicaoMaior);
    printf("Posicao do Menor Valor: %d\n", posicaoMenor);

    return 0;
}