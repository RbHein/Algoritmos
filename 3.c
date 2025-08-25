/* 3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das ́
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    float v[10], vQuadrado[10];

    printf("Informe os 10 numeros reais do Conjunto: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &v[i]);
    }

    for (i = 0; i < 10; i++)
    {
        vQuadrado[i] = v[i] * v[i];
    }

    printf("Conjunto: ");

    for (i = 0; i < 10; i++) 
    {
        printf("%.2f ", v[i]);
    }

    printf("\n");

    printf("Conjunto ao Quadrado: ");

    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", vQuadrado[i]);
    }

    printf("\n");

    return 0;
}