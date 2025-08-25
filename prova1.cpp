/* Agenda Telefônica */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contato {
    string nome;
    string telefone;

    public: 
    // Construtor 
    Contato(const string& nome, const string& telefone) : nome(nome), telefone(telefone) {}

    // getNome, retornar nome
    string getNome() const {
        return nome;
    }

    // getTelefone, retornar telefone
    string getTelefone() const {
        return telefone;
    }

    // Atualizar Telefone
    void atualizarTelefone(const string& novoTelefone) {
        telefone = novoTelefone;
    }

    // Retornar Nome e Telefone
    string toString() const {
        return "Nome: " + nome + " / Telefone: " + telefone;
    }

};

class AgendaTelefonica {
    std::vector<Contato> contatos;

    public:

    // Construtor inicializando lista vazia
    AgendaTelefonica() {}

    // Adicionar à lista de contatos
    void adicionarContato(const Contato& contato) {
        contatos.push_back(contato);
    }

    // Listar contatos em strings
    std::vector<std::string> listarContatos() const {
        std::vector<std::string> listaContatos;
        for (const Contato& c : contatos) {
            listaContatos.push_back(c.toString());
        }
        return listaContatos;
    }

    // Remover contato pelo nome
    void removerContato(const std::string& nome) {
        for (auto it = contatos.begin(); it != contatos.end(); ++it) {
            if (it->getNome() == nome) {
                contatos.erase(it);
                break;
            }
        }
    }
};


    // Função Principal, demonstrando funcionamento
int main() {
    
    AgendaTelefonica minhaAgenda;

    // Contatos Criados
    Contato contato1("Rafael", "49 99168-2263");
    Contato contato2("Maria", "51 98801-6110");
    Contato contato3("Carlos", "55 98418-7341");

    // Lista de Contatos
    std::vector<std::string> lista = minhaAgenda.listarContatos();
    std::cout << "Lista de contatos:" << std::endl;
    for (const std::string& contato : lista) {
        std::cout << contato << std::endl;
    }

    // Atualizar Telefone
    contato1.atualizarTelefone("123-456-789");
    std::cout << "\nTelefone de Rafael atualizado:" << std::endl;
    std::cout << contato1.toString() << std::endl;

    // Remover Contato
    minhaAgenda.removerContato("Maria");
    std::cout << "\nLista depois de remover:" << std::endl;
    lista = minhaAgenda.listarContatos();
    for (const std::string& contato : lista) {
        std::cout << contato << std::endl;
    }

    return 0;
}
