/* 12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    float maior, menor, soma = 0, media,  valores[5];

    printf("Informe 5 valores: ");

    for(i = 0; i < 5; i++) 
    {
        scanf("%f", &valores[i]);

        if(i == 0) 
        {
            maior = menor = valores[i];
        } 
        
        else 
        {
            if(valores[i] > maior) 
            {
                maior = valores[i];
            }

            if(valores[i] < menor) 
            {
                menor = valores[i];
            }
        }

        soma += valores[i];

    }

    media = soma / 5;

    printf("Valores Lidos: ");

    for(i = 0; i < 5; i++) 
    {
        printf("%.2f ", valores[i]);
    }

    printf("\n");

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;

}