/* Dado duas Matrizes reais de 2x3, calcule a soma delas */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float A[2][3], B[2][3], Soma[2][3];
    int i, j;
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            Soma[i][j] = A[i][j] + B[i][j];
        }
    }

    return 0;
}

// Código não roda, apenas exemplo de SOMA DE MATRIZES