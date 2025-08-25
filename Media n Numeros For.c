/* 
Leia n;
media recebe 0;
n1 recebe 0;
Enquanto (n1 < n)
{
    leia x;
    media recebe media + x;
    n1 recebe n1 + 1;
}
Fim Enquanto
Imprima media; 
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i;
    float num, soma = 0, media;

    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // Inicialização, condição, incremento -> Sequência de Comandos 
    {
        printf("Digite o numero %d: ", i);
        scanf("%f", &num);
        soma += num; 
    }

    media = soma / n;

    printf("Media dos %d numeros: %.2f", n, media);

    return 0;

}

