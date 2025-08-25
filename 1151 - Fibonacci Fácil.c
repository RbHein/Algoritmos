// Fibonacci Fácil //

#include <stdio.h>

int main () {

    int n, fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    if (n < 0 || n > 45) {
        printf("Valor de N invalido.\n");
        return 1;
    }

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;

}