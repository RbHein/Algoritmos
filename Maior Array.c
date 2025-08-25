// Imprimir o maior valor de dentro de um Array //

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, A[5] = {3, 18, 2, 51, 45};
    int maiorA = A [0];

    for (i = 1; i < 5; i++)
    {
        if (maiorA < A[i])
        {
            maiorA = A[i];
        }
    }

    printf("Maior: %d\n", maiorA);

    return 0;
}