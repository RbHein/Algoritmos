#include <stdio.h>
#include <math.h>

int main (){
    
    double x1, y1, x2, y2, val;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    val = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    val = sqrt(val);

    printf("%.4f\n", val);
    
    return 0;
}

