#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos números naturais abaixo de 1000 que são múltiplos de 5 é %d\n", soma);

    return 0;
}
