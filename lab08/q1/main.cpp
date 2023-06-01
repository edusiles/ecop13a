#include <iostream>
#include <stdexcept>
#include "Polinomio.h"

using namespace std;

int main() {
   try {
      // Criando um polinômio de ordem 3
      Polinomio p(3);

      // Atribuindo valores aos coeficientes
      p[0] = 2.0;
      p[1] = -1.0;
      p[2] = 3.5;
      p[3] = 4.2;  // Índice inválido, deve lançar uma exceção

      // Imprimindo o polinômio
      p.imprimir();
   }
   catch (const out_of_range& e) {
      cout << "Erro: Indice fora da faixa!\n";
   }

   return 0;
}
