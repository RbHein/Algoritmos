// Atividade Pilha 02.pdf - 23/10-2023

#include <iostream>

using namespace std;

class Pilha {
private:
    int topo;
    int elementos[10];

public:
    Pilha() : topo(-1) {}  // Construtor

    int PilhaVazia() {
        return (topo == -1);
    }

    int PilhaCheia() {
        return (topo == 9);
    }

    void Push(int valor) {
        if (PilhaCheia()) {
            cout << "Pilha cheia. Impossível inserir." << endl;
        } else {
            elementos[++topo] = valor;
            cout << "Elemento " << valor << " inserido na pilha." << endl;
        }
    }

    int Pop() {
    if (PilhaVazia()) {
        cout << "Pilha vazia. Impossivel remover elementos." << endl;
        exit(1);
    } else {
        int valor = elementos[topo];
        topo--;
        cout << "Elemento " << valor << " removido da pilha." << endl; 
        return valor;
    }
}

    void ExibirPilha() {
    cout << "Elementos:" << endl;
    for (int i = topo; i >= 0; i--) {
        cout << elementos[i] << endl;
    }
}

};

int main() {
    Pilha pilha; 

    int escolha;
    int valor;

    do {
        cout << "Menu:\n1 - Empilhar\n2 - Desempilhar\n3 - Mostrar\n0 - Sair\nEscolha: ";
        cin >> escolha;
        cin.ignore(); 

        switch (escolha) {
            case 1:
                cout << "Digite o valor a empilhar: ";
                cin >> valor;
                pilha.Push(valor);
                break;
            case 2:
                pilha.Pop();
                break;
            case 3:
                pilha.ExibirPilha();
                break;
            case 0:
                cout << "Fim." << endl;
                break;
            default:
                cout << "Tente novamente." << endl;
        }
    } while (escolha != 0);

    return 0;
}
