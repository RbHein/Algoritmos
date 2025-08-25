#include <stdio.h>

int main() 
{
    char nome[50];
    float nota1, nota2, nota3, nota4, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    if (media >= 7.0) 
    {
        printf("O aluno %s foi aprovado com media %.2f\n", nome, media);
    } 
    
    else if (media >= 6 && media < 7)
    {
        printf("O aluno %s tera direito a exame, com media %.2f\n", nome, media);
    }

    else 
    {
        printf("O aluno %s foi reprovado com media %.2f\n", nome, media);
    }

    return 0;
    
}