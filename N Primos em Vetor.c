/* Programa que carrega um vetor de 9 elementos inteiros, calcula e mostra os numeros 
primos e suas respectivas posicoes */

#include <stdio.h>
#include <stdio.h>

int main ()
{
    int i, x, cont = 0;

    printf("Informe 1 numero inteiro: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        printf("%d eh Primo. ", x);
    }

    return 0;
}