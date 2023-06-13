#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

int main() {
   Pilha<float> p{50}; // Especialização do template
   float v = 0;

   cout << "Inserindo itens na pilha: \n";

   while(v != -1) {
      cin >> v;
      p.push(v);
   }

   cout << "Removendo itens... \n";

   while(!(p.isEmpty())) {
      p.pop(v);
      cout << v << " ";
   }

   return 0;
}