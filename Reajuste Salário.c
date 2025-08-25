/* 6 - As organizações CSM resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calcula os reajustes.    
    • a. Faça um programa que recebe o salбrio de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual;
    • b. Salários até R$ 280,00 (incluindo): aumento de 20%;
    • c. Salários entre R$ 280,00 e R$700,00: aumento de 15%;
    • d. Salários entre R$ 700,00 e R$ 1500,00: aumento de 10%;
    • e. Salários de R$ 1500,00 em diante: aumento de 5%

    Após o aumento ser realizado; informe na tela;
    • a. O salário antes do reajuste;
    • b. O percentual de aumento aplicado;
    • c. O valor do aumento;
    • d. O novo salário, após o aumento. */

    #include <stdio.h>
    #include <stdlib.h>

    int main ()
    {
        float salarioAtual, aumento, salarioNovo;

        printf("Informe o seu salario atual: ");
        scanf("%f", &salarioAtual);

        if (salarioAtual <= 280)
        {
            salarioNovo = salarioAtual + (salarioAtual * 20/100);
            printf("Salario Antes do Reajuste: %.2f\n", salarioAtual);
            printf("Percentual de Aumento: 20%%\n");
            aumento = salarioNovo - salarioAtual;
            printf("Valor do aumento: %.2f\n", aumento);
            printf("Novo Salario: %.2f", salarioNovo);
        }

        else if (salarioAtual > 280 && salarioAtual <= 700)
        {
            salarioNovo = salarioAtual + (salarioAtual * 15/100);
            printf("Salario Antes do Reajuste: %.2f\n", salarioAtual);
            printf("Percentual de Aumento: 15%%\n");
            aumento = salarioNovo - salarioAtual;
            printf("Valor do aumento: %.2f\n", aumento);
            printf("Novo Salario: %.2f", salarioNovo);
        }

        else if (salarioAtual > 700 && salarioAtual <= 1500)
        {
            salarioNovo = salarioAtual + (salarioAtual * 10/100);
            printf("Salario Antes do Reajuste: %.2f\n", salarioAtual);
            printf("Percentual de Aumento: 10%%\n");
            aumento = salarioNovo - salarioAtual;
            printf("Valor do aumento: %.2f\n", aumento);
            printf("Novo Salario: %.2f", salarioNovo);
        }

        else 
        {
            salarioNovo = salarioAtual + (salarioAtual * 5/100);
            printf("Salario Antes do Reajuste: %.2f\n", salarioAtual);
            printf("Percentual de Aumento: 5%%\n");
            aumento = salarioNovo - salarioAtual;
            printf("Valor do aumento: %.2f\n", aumento);
            printf("Novo Salario: %.2f", salarioNovo);
        }

        return 0;

    }
