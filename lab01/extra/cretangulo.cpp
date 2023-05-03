#include <cretangulo.h>
#include <iostream>

using namespace std;

// Construtor:
Retangulo::Retangulo() { // Inicializa com valores padrão
   comprimento=1;
   largura=1;
} 

// Função para obter comprimento
Retangulo::Retangulo(int comp, int larg) { // Inicializa com valores enviados pelo usuário
   comprimento=comp;
   largura=larg;
   // Validar valor recebido entre 0 e 20
}

// Função para obter largura
bool Retangulo::valid_comprimento() {
   // Validar valor recebido entre 0 e 20
   return (Retangulo::comprimento >= 0 && Retangulo::comprimento <= 20) ? true : false;
}

// Função para obter largura
bool Retangulo::valid_largura() {
   // Validar valor recebido entre 0 e 20
   return (Retangulo::largura >= 0 && Retangulo::largura <= 20) ? true : false;
}

// Cálculo da área do retângulo:
int Retangulo::area() {
   return Retangulo::comprimento * Retangulo::largura;
}

// Cálculo do perímetro do retângulo:
int Retangulo::perimetro() {
   return (2 * Retangulo::comprimento) + (2 * Retangulo::largura);
}

// Imprimir retangulo:
void Retangulo::imprimir(int opcao, char borda, char preenchimento) {
   for (int i=0; i<comprimento; i++) {
      for (int j=0; j<largura; j++) {
         // Exibir bordas:
         if ((i==0) || (i==comprimento-1) || (j==0) || (j==largura-1))
            cout << borda;

         // Exibir preencimento se o usuário desejar
         if (opcao==1)
            cout << preenchimento;

         cout << " ";
      }
      cout << endl;
   }
}

bool Retangulo::quadrado() {
   return (Retangulo::comprimento == Retangulo::largura) ? true : false;
}

// Destrutor:
Retangulo::~Retangulo() {

}