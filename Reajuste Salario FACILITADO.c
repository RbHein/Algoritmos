
#include <stdio.h>
#include <stdlib.h> 

int main ()
{

    float salarioAtual, aumento, salarioNovo;
    int percentual;

    printf("Informe o seu salário atual: ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 280)
    {
        percentual = 20;
        aumento = salarioAtual * 0.2;
    }

    else if (salarioAtual <= 700)
    {
        percentual = 15;
        aumento = salarioAtual * 0.15;
    }

    else if (salarioAtual <= 1500)
    {
        percentual = 10;
        aumento = salarioAtual * 0.1;
    }

    else
    {
        percentual = 5;
        aumento = salarioAtual * 0.05;
    }

    salarioNovo = salarioAtual + aumento;

    printf("Salario Antes do Reajuste: %.2f\n", salarioAtual);
    printf("Percentual de Aumento Aplicado: %d\n", percentual);
    printf("Valor do Aumento: %.2f\n", aumento);
    printf("Novo Salario: %.2f\n", salarioNovo);

    return 0;

}
