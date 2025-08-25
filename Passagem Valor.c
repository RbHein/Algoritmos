
void incrementa (int n)
{
    n += 1;

    printf("Dentro da Funcao: x = %d\n", n);
}

int main ()
{
    int x;
    
    x = 5;

    printf("Antes da Funcao: x = %d\n", x);

    incrementa(x);

    printf("Depois da Funcao: x = %d\n", x);

    return 0;
}