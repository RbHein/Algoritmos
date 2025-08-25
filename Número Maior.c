#include <stdio.h>

int main()
{
    float x, y;

    printf("Informe o primeiro numero: ");
    scanf("%f", &x);

    printf("Informe o segundo numero: ");
    scanf("%f", &y);

    if (x > y)
    {
        printf("Maior numero: %f", x);
    }

    else if (y > x)
    {
        printf("Maior numero: %f", y);
    }

    else 
    {
        printf("Os numeros sao iguais.");
    }
    
    return 0;

}