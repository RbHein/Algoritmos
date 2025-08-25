/* Crie uma função que recebe dois ponteiros para inteiros como
parâmetros e troca os valores apontados por eles. Teste essa função na
main com dois inteiros diferentes. */

#include <stdio.h>

    int trocaValores (int *ptr1, int *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    int main () {
        
    int a = 1;
    int b = 2;

    printf("Valores originais \n a = %d \n b = %d\n", a, b);

    trocaValores(&a, &b);

    printf("Valores trocados: \n a = %d \n b = %d\n", a, b);

    return 0;
}