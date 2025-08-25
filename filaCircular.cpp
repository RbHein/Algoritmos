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
    ~Motor() {}};

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
    ~Veiculo() {}};

class FilaCircular {
private:
    std::vector<Veiculo> fila;
    int tamanhoMax;
    int frente;
    int traseira;

public:
    FilaCircular(int tamanho) : tamanhoMax(tamanho), frente(0), traseira(-1) {
        fila.resize(tamanhoMax);
    }

    bool estaVazia() const {
        return frente == -1;
    }

    bool estaCheia() const {
        return ((traseira + 1) % tamanhoMax) == frente;
    }

    void enfileirar(const Veiculo& veiculo) {
        if (!estaCheia()) {
            if (estaVazia()) {
                frente = 0;
            }
            traseira = (traseira + 1) % tamanhoMax;
            fila[traseira] = veiculo;
        } else {
            std::cout << "Fila cheia. Impossivel enfileirar." << std::endl;
        }
    }

    void desenfileirar() {
        if (!estaVazia()) {
            if (frente == traseira) {
                frente = -1;
                traseira = -1;
            } else {
                frente = (frente + 1) % tamanhoMax;
            }
        } else {
            std::cout << "Fila Vazia. Impossivel desenfileirar." << std::endl;
        }
    }

    Veiculo getPrimeiroVeiculo() const {
        if (!estaVazia()) {
            return fila[frente];
        } else {
            throw std::runtime_error("Fila de Veiculos Vazia.");
        }
    }

    void imprimirFila() const {
    if (estaVazia()) {
        std::cout << "A fila está vazia." << std::endl;
    } else {
        int idx = frente;
        do {
            fila[idx].printVeiculo(); 
            idx = (idx + 1) % tamanhoMax;
        } while (idx != (traseira + 1) % tamanhoMax);
    }
}

};

int main() {
    FilaCircular filaProducaoMontagem(5);

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
        filaProducaoMontagem.enfileirar(veiculo);
    }

    std::cout << "Fila depois de Enfileirar:" << std::endl;
    filaProducaoMontagem.imprimirFila();

    // Verificar se fila vazia ou não
    if (!filaProducaoMontagem.estaVazia()) {
        Veiculo veiculoProduzido = filaProducaoMontagem.getPrimeiroVeiculo();
        filaProducaoMontagem.desenfileirar();

        std::cout << "Fila depois de Desenfileirar:" << std::endl;
        filaProducaoMontagem.imprimirFila();

        // Dados veículo produzido
        std::cout << "Veiculo Produzido:" << std::endl;
        veiculoProduzido.printVeiculo();
    } else {
        std::cout << "Fila de Producao Vazia." << std::endl;
    }

    return 0;
}