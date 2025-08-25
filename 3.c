#include <stdio.h>

int main ()
{
    int i;
    float valores, soma;

    printf("Informe 10 Valores: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &valores);
        soma += valores;
    }

    printf("Soma dos Valores: %.2f\n", soma);
    
    return 0;
    
}