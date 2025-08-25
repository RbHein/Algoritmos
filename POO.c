
#include <stdio.h>

// Definição da estrutura "Carro"
struct Carro 
{
   char marca[20];
   int ano;
   float preco;
   void (*ligarMotor)();
};

// Comportamento "ligarMotor" do carro
void ligarMotor() 
{
   printf("Vrum vrum!\n");
}

int main() 
{
    
   // Criação de um objeto "carro"
   struct Carro meuCarro = {"Fiat", 2021, 50000.0, &ligarMotor};

   // Acesso aos dados do objeto
   printf("Marca: %s\n", meuCarro.marca);
   printf("Ano: %d\n", meuCarro.ano);
   printf("Preço: %.2f\n", meuCarro.preco);

   // Chamada do comportamento "ligarMotor" do objeto
   meuCarro.ligarMotor();

   return 0;

}