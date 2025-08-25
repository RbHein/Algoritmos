#include <iostream>
#include <string>

using namespace std;

class Veiculo {
    int velocidade;
    float peso, preco;

    public: 
    // Setters
    void setVelocidadeVeiculo (float valor) {
        velocidade = valor;
    }
    void setPesoVeiculo (float valor) {
        peso = valor;
    }
    void setPrecoVeiculo (float valor) {
        preco = valor;
    }

    // Getter

    int getVelocidadeVeiculo () {
        return velocidade;
    }
    float getPesoVeiculo () {
        return peso;
    }
    float getPrecoVeiculo () {
        return preco;
    }

    // Print
    void printVeiculo () {
        std::cout << "Peso: " << peso << " kg" << std:: endl; 
        std::cout << "Preco: R$ " << preco << std:: endl; 
        std::cout << "Velocidade Maxima: " << velocidade << " km/h" << std:: endl;
    }
};

class Motor {
    int numeroCilindros;
    float potencia;

    public: 

    // Setters
    void setNumeroCilindrosMotor (float valor) {
        numeroCilindros = valor;
    }
    void setPotenciaMotor (float valor) {
        potencia = valor;
    }

    // Getters
    int getNumeroCilindrosMotor () {
        return numeroCilindros;
    }
    float getPotenciaMotor () {
        return potencia;
    }

    // Print
    void printVeiculo () {
        std::cout << "V" << numeroCilindros << std::endl;
        std::cout << "Potencia: " << potencia << "cv" << std::endl;
    }
};

int main () {
    // Criando dois objetos da classe Veículo
    Veiculo carro1, carro2;

    // Configurando os atributos dos objetos da Classe Veículo
    carro1.setPesoVeiculo(1500.0);
    carro1.setPrecoVeiculo(45000.0);
    carro1.setVelocidadeVeiculo(180);

    carro2.setPesoVeiculo(1200.0);
    carro2.setPrecoVeiculo(35000.0);
    carro2.setVelocidadeVeiculo(160);

    // Imprimir objetos da classe Veículo
    std::cout << "Dados Veiculo 1:" << std::endl;
    carro1.printVeiculo();
    std::cout << std::endl;

    std::cout << "Dados Veiculo 2:" << std::endl;
    carro2.printVeiculo();
    std::cout << std::endl;

    // Criar dois Objetos Classe Motor
    Motor motor1, motor2;

    // Configurar atributos dos objetos da classe Motor
    motor1.setNumeroCilindrosMotor(4);
    motor1.setPotenciaMotor(150);

    motor2.setNumeroCilindrosMotor(6);
    motor2.setPotenciaMotor(200);

    // Imprimir objetos da Classe Motor
    std::cout << "Dados Motor 1:" << std::endl;
    motor1.printVeiculo();
    std::cout << std::endl;

    std::cout << "Dados Motor 2:" << std::endl;
    motor2.printVeiculo();
    std::cout << std::endl;

    return 0;
}
