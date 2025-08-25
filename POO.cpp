#include <iostream>

using namespace std;

class DiarioAula {
    
    // Atributos
    public:
        // Métodos

        // Método Void, sem retorno, que imprime a mensagem de boas-vindas
        void mostraMensagem () {
            printf("Bem vindo ao Diario de Aula");
        }

}; // Fim da Classe

int main () {

    // Criação de um objeto da classe DiarioAula
    DiarioAula meuDiario;

    meuDiario.mostraMensagem;

    return 0;
}