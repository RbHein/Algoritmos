#include <stdio.h>

int main() 
{
    int operador;
    float n1, n2, resposta;

    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);

    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    printf("(1) Soma\n");
    printf("(2) Subtracao\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n");
    scanf("%d", &operador);


    switch (operador)
    {
    case 1:
        resposta = n1 + n2;
        break;

    case 2:
        resposta = n1 - n2;
        break;

    case 3:
        resposta = n1 * n2;
        break;

    case 4:
        resposta = n1 / n2;
        break;
    
    default:
        printf("Codigo Invalido. Tente Novamente\n");
        break;
    }

    printf("Resultado: %.2f", resposta);

    return 0;
}