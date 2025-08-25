#include <bits/stdc++.h>

/* Crie uma função que sirva para dizer a diferença entre duas datas, escreves dias e também horas. 

Os resultados devem ser escritos em duas variáveis locais da Função Main.

Cálculos devem ser feitos na função.

Não utilizar variáveis globais.*/

void verificarDiferenca () {

    int dia1, dia2, mes1, mes2, ano1, ano2, difDias, difHoras;

    printf("Data 1 (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Data 2 (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    difDias = (dia1 + (mes1*30) + (ano1 * 365)) - (dia2 + (mes2*30) + (ano2*365));
    difHoras = difDias * 24;

    printf("Diferenca Dias: %d\n", difDias);
    printf("Diferenca Horas: %d", difHoras);

}

int main () {

    verificarDiferenca();
    
    return 0;
}

