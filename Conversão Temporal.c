
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, minutos, horas;

    printf("Informe o tempo em segundos: \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos - (3600 * horas);
    minutos = segundos /60;
    segundos = segundos - (60 * minutos);
    
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;

}