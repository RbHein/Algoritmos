
#include <stdio.h>

int main ()
{
    int i, n, maior, menor;

    printf("Informe 10 numeros: \n");
    scanf("%d", &n);

    maior = n;
    menor = n;

    for (i = 2; i <= 10; i++)
    {
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        }

        else
        {
            menor = n;
        }    
    }

    printf("Maior Valor: %d\n", maior);
    printf("Menor Valor: %d\n", menor);

    return 0;

}