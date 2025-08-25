/* 10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral. */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    float media = 0, notas [15];

    printf("Informe a nota da prova dos 15 alunos: \n");
    
    for (i = 0; i < 15; i++)
    {
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media /= 15;

    printf("Media Geral: %.2f", media);

    return 0;
}