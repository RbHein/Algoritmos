// Primeiro Exemplo de Matriz //

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int mat[5] [4];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor de mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    return 0;
}