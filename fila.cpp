/* Conectar os diferentes tipos de motores a um carro. Após a conexão do motor ao carro, eles precisam ser organizados em ordem.
Portanto, você precisa conectar o carro anterior ao novo carro que esta sendo direcionado à fila de montagem.

Adicionar os atributos para a classe Veículo:
    Adicione um atributo MOTOR ao VEÍCULO.
    
Classe FILA DE VEÍCULOS com os métodos Insere, Remove e Tamanho da Fila.

Métodos para todas as classes:
    Construtor da classe vazio e com atribuição;
    Métodos Get, Set e Print
    Desconstrutor
    
Main: 
    Crie um programa mostrando o funcionamento das funções.
    Demonstre a fila de produção da montagem em funcionamento adicionado CINCO veículos. Deverá pegar o primeiro elemento da fila,
    removê-lo e mostrar os dados do veículo que foi produzido.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Motor {
private:
    int numeroCilindros;
    float potencia;

public:
    Motor() : numeroCilindros(0), potencia(0.0f) {}

    // Setters
    void setNumeroCilindrosMotor(int valor) {
        numeroCilindros = valor;
    }
    void setPotenciaMotor(float valor) {
        potencia = valor;
    }

    // Getters
    int getNumeroCilindrosMotor() const {
        return numeroCilindros;
    }
    float getPotenciaMotor() const {
        return potencia;
    }

    // Print
    void printMotor() const {
        std::cout << "Motor V" << numeroCilindros << std::endl;
        std::cout << "Potencia: " << potencia << "cv" << std::endl;
    }

    // Destrutor
    ~Motor() {}
};

class Veiculo {
private:
    int velocidade;
    float peso, preco;
    Motor motor;

public:
    Veiculo() : velocidade(0), peso(0.0f), preco(0.0f) {}

    // Setters
    void setVelocidadeVeiculo(int valor) {
        velocidade = valor;
    }
    void setPesoVeiculo(float valor) {
        peso = valor;
    }
    void setPrecoVeiculo(float valor) {
        preco = valor;
    }

    // Getters
    int getVelocidadeVeiculo() const {
        return velocidade;
    }
    float getPesoVeiculo() const {
        return peso;
    }
    float getPrecoVeiculo() const {
        return preco;
    }

    // Print
    void printVeiculo() const {
        std::cout << "Peso: " << peso << " kg" << std::endl;
        std::cout << "Preco: R$ " << preco << std::endl;
        std::cout << "Velocidade Maxima: " << velocidade << " km/h" << std::endl;
        motor.printMotor();
    }

    void setMotor(const Motor& m) {
        motor = m;
    }

    Motor getMotor() const {
        return motor;
    }

    // Destrutor
    ~Veiculo() {}
};

class FilaDeVeiculos {
private:
    std::vector<Veiculo> fila;

public:
    FilaDeVeiculos() {}

    // Inserir um veículo na fila
    void insere(const Veiculo& veiculo) {
        fila.push_back(veiculo);
    }

    // Remover um veículo da fila
    void remove() {
        if (!fila.empty()) {
            fila.erase(fila.begin());
        }
    }

    // Obter tamanho da fila
    int tamanho() const {
        return fila.size();
    }

    // Organizar os carros na fila
    void organizarCarros() {
        std::sort(fila.begin(), fila.end(), [](const Veiculo& a, const Veiculo& b) {
            return a.getPrecoVeiculo() < b.getPrecoVeiculo();
        });
    }

    // Pegar primeiro da fila
    Veiculo getPrimeiroVeiculo() const {
        if (!fila.empty()) {
            return fila.front();
        } else {
            throw std::runtime_error("Fila de Veiculos Vazia.");
        }
    }

    // Destrutor
    ~FilaDeVeiculos() {}
};

int main() {
    FilaDeVeiculos filaProducaoMontagem;

    // Adicionar 5 veículos
    for (int i = 1; i <= 5; i++) {
        Veiculo veiculo;
        veiculo.setPesoVeiculo(1500.0f);
        veiculo.setPrecoVeiculo(260000.0f);
        veiculo.setVelocidadeVeiculo(230);

        // Conectar motor ao veículo
        Motor motor;
        motor.setNumeroCilindrosMotor(6);
        motor.setPotenciaMotor(250.0f);
        veiculo.setMotor(motor);

        // Adicionar veículo na fila de montagem
        filaProducaoMontagem.insere(veiculo);
    }

    // Organizar carros na fila 
    filaProducaoMontagem.organizarCarros();

    // Verificar se a fila não está vazia
    if (filaProducaoMontagem.tamanho() > 0) {
        // Pegar o primeiro da fila, remover e mostrar dados
        Veiculo veiculoProduzido = filaProducaoMontagem.getPrimeiroVeiculo();
        filaProducaoMontagem.remove();

        // Imprimir dados do veículo produzido
        std::cout << "Veiculo Produzido:" << std::endl;
        veiculoProduzido.printVeiculo();
    } else {
        std::cout << "Fila de Produção Vazia." << std::endl;
    }

    return 0;
}
