/* Algoritmo usando Arrays para ler as notas de 5 estudantes, calcular a média e 
imprimir as médias dos alunos que ficaram acima da média da turma */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    float media = 0, notas [5];

    printf("Informe as notas dos estudantes: \n");

    for (i = 0; i < 5; i++)
    {
        printf("Nota do Estudante %d: ", i);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 5; i++)
    {
        media = media + notas[i];
        media = media / 5;
    }

    for (i = 0; i < 5; i++)
    {
        if (notas [i] > media)
        {
            printf("Notas: %.2f\n", notas[i]);
        }
    }

    return 0;
}

