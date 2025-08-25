#include <iostream>
#include <algorithm>

using namespace std;

int compara(const void *a, const void *b);

bool busca(unsigned *, unsigned, unsigned short);

int posicao;

int main()
{

    unsigned short i, qtdCasos = 0;
    unsigned short qtdConsultas;
    unsigned qtdMarmores, numero;

    while (true)
    {

        cin >> qtdMarmores >> qtdConsultas;

        if (qtdConsultas == 0 && qtdMarmores == 0)
            break;

        unsigned marmores[qtdMarmores];

        for (i = 0; i < qtdMarmores; i++)
            cin >> marmores[i];

        sort(marmores, marmores + qtdMarmores);

        cout << "CASE# " << ++qtdCasos << ":\n";
        while (qtdConsultas--)
        {

            cin >> numero;

            if (busca(marmores, numero, qtdMarmores))
            {

                if (marmores[posicao - 1] == marmores[posicao])
                {
                    while (marmores[posicao - 1] == marmores[posicao])
                        posicao--;

                    cout << numero << " found at " << posicao + 1 << endl;

                }
                else
                    cout << numero << " found at " << posicao + 1 << endl;

            }
            else
                cout << numero << " not found" << endl;

        }
    }

    return 0;
}

int compara(const void *a, const void *b)
{

    if (*(unsigned *)a == *(unsigned *)b)
        return 0;
    else if (*(unsigned *)a > *(unsigned *)b)
        return 1;
    else
        return -1;
}

bool busca(unsigned *marmores, unsigned numero, unsigned short tam)
{
    int inicio, fim, meio;
    inicio = 0;
    fim = tam - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        if (marmores[meio] < numero)
            inicio = meio + 1;
        else if (marmores[meio] > numero)
            fim = meio - 1;
        else
        {
            posicao = meio;
            return true;
        }
    }
    return false;
}
