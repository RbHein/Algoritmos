#include <iostream>
#include <string>

using namespace std;

class FilaCircular {

    int *fila; 

    int tamanho;
    int qtdElementos;
    int inicio;
    int fim;

    public:

        // Construtor
        FilaCircular(int valorTamanho){
            tamanho = valorTamanho;
            fila = (int *)malloc(tamanho * sizeof(int));
            inicio = 0;
            fim = -1;
            qtdElementos = 0;
        }

        bool filaVazia() {
            if (fim == -1){
                return true;
            }
            else {
                return false;
            }
        }

        void insere(int valor) {
            if (qtdElementos < tamanho) {
            fim = (fim+1) % tamanho;
            fila[fim] = valor;
            inicio++;
            qtdElementos++;
        }
        else {
            cout << "Fila Cheia" << endl;
        }
        }

        int remover () {
            if (filaVazia () == false) {
                int valor = fila[inicio];
                inicio = (inicio + 1) % tamanho;
                qtdElementos--;
                return valor;
            }
            else {
                cout<< "Fila Vazia" << endl;
                return -1;
            }
        }

        void imprimeFila () {
            cout << "Inicio" << inicio << "Fim" << fim << endl;

            for (int i = inicio; i < fim; i++) {
                printf("%d ", fila[i]);
            }
            printf("\n");
        }

        int sz_tamanho () {
            return qtdElementos;
        }
};

int main () {

    FilaCircular fila(5);

    cout << endl << endl << endl;
    cout << "Fila esta vazia?" << fila.filaVazia() << endl;

    fila.insere(2);
    fila.insere(5);
    fila.insere(7);
    fila.insere(10);

    fila.imprimeFila();

    fila.insere(3);
    cout << "Elemento Removido: " << fila.remover() << endl;
    fila.imprimeFila();
    fila.insere(4);
    fila.imprimeFila();
    cout << "Elemento removido: " << fila.remover() << endl;
    cout << "Elemento removido: " << fila.remover() << endl;
    
    return 0;
}