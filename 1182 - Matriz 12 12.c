#include <stdio.h>

int main() {
    double M[12][12];
    int coluna, i, j;
    char operacao;
    double resultado = 0.0;

    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        resultado += M[i][coluna];
    }

    if (operacao == 'M') {
        resultado /= 12.0;
    }

    printf("%.1lf\n", resultado);

    return 0;
}