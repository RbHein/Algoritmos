
#include <stdio.h>

int main ()
{
    int n = 1, contagem = 0;

    printf("Os cinco primeiros multiplos de 3 sao: \n");

    while (contagem < 5)
    {
        if (n % 3 == 0)
        {
            printf("%d\n", n);
            contagem++;
        }
        n++;
    }
    
    return 0;
    
}