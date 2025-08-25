/* 16. Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
codigo inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
escreva uma mensagem informando que o código e invalido. ́*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, codigo;
    float vetor[5];

    printf("Informe 5 Numeros Reais: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetor[i]);
    }

    do 
    {
        printf("Digite 1 para exibir o Vetor na Ordem Original.\n");
        printf("Digite 2 para exibir o Vetor na Ordem Inversa.\n");
        scanf("%d", &codigo);

        if (codigo == 1)
        {
            printf("\nOrdem Direta (Original): \n");

            for (i = 0; i < 5; i++) 
            {
                printf("%.2f \n", vetor[i]);
            }
        }

        else if (codigo == 2)
        {
            printf("Ordem Inversa: \n");

            for (i = 4; i >= 0; i--) 
            {
                printf("%.2f \n", vetor[i]);
            }
        }

        else
        {
            printf("Codigo Invalido. Reinicie o Programa\n");
        }

    } while (codigo != 0);
    

    return 0;
}