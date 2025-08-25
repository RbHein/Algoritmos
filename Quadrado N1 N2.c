// Função //

int quadrado (int a)
{
    return a * a;
}

int main ()
{
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    n2 = quadrado(n1);

    printf("Quadrado do numero informado: %d", n2);

    return 0;
}