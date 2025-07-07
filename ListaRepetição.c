EXERCÍCIO 1 

/* Faça um programa que determine o mostre os cinco primeiros múltiplos de 3,
considerando números maiores que 0. */


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



EXERCÍCIO 2

/* Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a
contagem. */

#include <stdio.h>

int main ()
{
    int n = 10;

    while (n >= 0)
    {
        printf("%d\n", n);
        n--;
    }

    printf("FIM!");
    
    return 0;
    
}


EXERCÍCIO 3 


/* Faça um programa que peça ao usuário para digitar 10 valores e some-os. */

#include <stdio.h>

int main ()
{
    int i;
    float valores, soma;

    printf("Informe 10 Valores: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &valores);
        soma += valores;
    }

    printf("Soma dos Valores: %.2f\n", soma);
    
    return 0;
    
}



EXERCÍCIO 4 


/* Faça um programa que leia 10 inteiros positivos, ignorando na ̃o positivos, e imprima
sua média. */

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


EXERCÍCIO 5


/* Escreva um programa que leia 10 nu ́meros e escreva o menor valor lido e o maior
valor lido. */


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


EXERCÍCIO 6


/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
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
