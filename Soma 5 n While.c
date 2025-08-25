/* Faça um programa para ler 5 números e mostrar o resultado da soma deles*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int contagem = 1;
    float valor, soma = 0;

    while (contagem <= 5)
    {
        printf("Informe um numero %d: ", contagem);
        scanf("%f", &valor);
        soma = soma + valor;
        contagem++;
    }

    printf("Resultado da Soma: %.2f", soma);

    return 0;
}

