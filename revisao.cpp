// Biblioteca para usar entrada e saida no C
#include <stdio.h>

// Biblioteca para usar entrada e saida no C++
#include <iostream>


// Necessário quando se C++
using namespace std;


// Função principal do nosso programa
int main(){

    int idade, RG;
    float peso;
    double alturaCM;

    cin >> idade;

    char nome[150];

    printf("Digite seu RG e sua idade:\n");
    scanf("%d %d", &RG, &idade);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("Digite sua altura em CM: \n");
    scanf("%lf", &alturaCM);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    if (idade >= 18){
        printf("É maior de idade");
    }
    if (idade >= 60){
        printf("É idosa");
    }

    return 0;
}