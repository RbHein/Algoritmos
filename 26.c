/* 26. Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo ˜
ax^2 + bx + c = 0.  A variavel A tem que ser diferente de zero.
• Se ∆ < 0 nao existe real
• Se ∆ = 0 existe uma raiz real.
• Se ∆ ≥ 0 existem duas ra´ızes reais.

Essa função deve obedecer ao seguinte prototipo:

int raizes(float A,float B,float C,float * X1,float * X2);

A função deve ter como valor de retorno o nuumero de raizes reais e distintas da
equação. Se existirem raízes reais, seus valores devem ser armazenados nas variaveis apontadas por X1 e X2. */

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) 
{
    float delta = (B * B) - (4 * A * C);

    if (delta < 0)
    {
        return 0;
    } else if (delta == 0) 
    {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1;
    } else 
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() 
{
    int nRaizes;
    float a, b, c, x1, x2;

    printf("Valor de A: ");
    scanf("%f", &a);

    if (a == 0) 
    {
        printf("Invalida como Equacao do Segundo Grau.\n");
        return 0;
    }

    printf("Valor de B: ");
    scanf("%f", &b);

    printf("Valor de C: ");
    scanf("%f", &c);

    nRaizes = raizes(a, b, c, &x1, &x2);

    if (nRaizes == 0) 
    { 
        printf("Equacao nao possui Raizes Reais.\n");
    } else if (nRaizes == 1) 
    {
        printf("Equacao possui uma Raiz Real:\n");
        printf("X = %.2f\n", x1);
    } else 
    {
        printf("Equacao possui duas Raizes Reais:\n");
        printf("x' = %.2f\n", x1);
        printf("x'' = %.2f\n", x2);
    }

    return 0;
}
