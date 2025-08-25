#include <stdio.h>

// Função recursiva para calcular o número de Fibonacci
int fib(int n, int *calls) {
    (*calls)++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1, calls) + fib(n - 2, calls);
}

int main() {
    int num_calls;
    scanf("%d", &num_calls);

    for (int i = 0; i < num_calls; i++) {
        int x;
        scanf("%d", &x);

        int num_calls = 0;
        int resultado = fib(x, &num_calls);

        printf("fib(%d) = %d calls = %d\n", x, num_calls - 1, resultado);
    }

    return 0;
}
