#include "retangulo.h"
#include "circulo.h"
#include <iostream>

using namespace std;

int main() {
   Forma* vetorFormas[5];

   vetorFormas[0] = new Retangulo {10, 30, 45, 21};
   vetorFormas[1] = new Retangulo {10, 30, 45, 21};
   vetorFormas[2] = new Circulo {0, 0, 15.5};
   vetorFormas[3] = new Circulo {9.0, 0.75, 18};
   vetorFormas[4] = new Retangulo {0, 0, 10, 10};

   for (auto x : vetorFormas) {
      cout << "\nForma: " << endl;
      x->imprimeDados();
      cout << "\n\n";
   }

   return 0;
}