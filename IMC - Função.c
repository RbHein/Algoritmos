#include <stdio.h>

float calculaIMC(float peso, float altura)
{
    float imc = peso / (altura * altura);
    printf("IMC = %.2f", imc);
    return imc;
}

int main() 
{ 
    float peso, altura;
    
    printf("Informe o peso: ");
    scanf("%f", &peso);

    printf("Informe a altura: ");
    scanf("%f", &altura);
    
    calculaIMC(peso, altura);

    return 0;
}
