#include <stdio.h>
#include <math.h>

int main ()
{
    float x1, x2, y1, y2, distancia;

    printf("Informe o valor de x1 e x2: ");
    scanf("%f %f", &x1, &x2);

    printf("Informe o valor de y1 e y2: ");
    scanf("%f %f", &y1, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("Distancia entre os dois pontos: %.4f\n", distancia);

    return 0;
}