#include <stdio.h>

int main () {

    int i, n, menor, posicao = 0;

    scanf("%d", &n);

    if (n < 1 || n >= 1000) {
        printf("Valor de N invalido.");
        return 1;
    }

    int vetor[n]; 

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}