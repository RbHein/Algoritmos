/* Crie uma função que recebe um ponteiro para uma string e a imprime de trás para frente. 
Teste essa função com diferentes strings na main.*/

#include <stdio.h>
#include <string.h>

void inverter(char *string) {
    int comprimento = strlen(string);
    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
}

int main() {
    char string1[] = "Teste \n";
    char string2[] = "Arara \n";
    char string3[] = "12345 \n";

    printf("Imprimindo strings de tras para frente:\n");
    inverter(string1);
    inverter(string2);
    inverter(string3);

    return 0;
}
