
#include <stdio.h>

int main ()
{
    int i, n = 2, soma = 0;

    for (i = 1; i <= 50; i++)
    {
        soma += n;
        n += 2;
    }

    printf("Soma dos 50 primeiros numeros pares: %d", soma);

    return 0;

}