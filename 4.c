#include <stdio.h>

int main ()
{
    int i, n, contagem = 0;
    float soma = 0, media;

    printf("Informe 10 numeros positivos: \n");

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        
        if (n > 0)
        {
            contagem++;
            soma += n;
        }
    }

    media = soma / contagem;

    printf("Media dos Numeros Positivos informados: %.2f\n", media);
    
    return 0;
    
}