/* Imprimindo números entre A e B */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b;

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    while (a < b)
    {
        a = a + 1;
        printf("%d \n", a);
    }

    return 0;
}