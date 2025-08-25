/* SOMA DOS NUMEROS ENTRE 1 E 10 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, soma = 0;

    for (i = 1; i <= 10; i++)
    {
        soma += i;
    }

    printf("Soma dos numeros inteiros entre 1 e 10: %d", soma);
    
    return 0;
}


