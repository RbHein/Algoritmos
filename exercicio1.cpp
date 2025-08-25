#include <bits/stdc++.h>

void verificarDiferenca(int *difDias, int *difHoras) {
    
    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Data 1 (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Data 2 (dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    *difDias = (dia1 + (mes1 * 30) + (ano1 * 365)) - (dia2 + (mes2 * 30) + (ano2 * 365));
    *difHoras = *difDias * 24;
}

int main() {
    
    int difDias, difHoras;

    verificarDiferenca(&difDias, &difHoras);

    printf("Diferenca Dias: %d\n", difDias);
    printf("Diferenca Horas: %d\n", difHoras);

    return 0;
}
