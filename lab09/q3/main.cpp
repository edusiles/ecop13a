#include <iostream>
#include <cstdlib>
#include "pilha.h"
 
using namespace std;

int main() {
   Pilha<int> i{10}; // Especialização do template
   int v1 = 0;

   cout << "Inserindo itens tipo int na pilha: \n";

   while(v1 != -1) {
      cin >> v1;
      i.push(v1);
   }

   cout << "Removendo itens... \n";

   while(!(i.isEmpty())) {
      i.pop(v1);
      cout << v1 << " ";
   }

   // float
   Pilha<float> f{10};
   float v2 = 0;

   cout << "\nInserindo itens tipo float na pilha: \n";

   while(v2 != -1) {
      cin >> v2;
      f.push(v2);
   }

   cout << "Removendo itens... \n";

   while(!(f.isEmpty())) {
      f.pop(v2);
      cout << v2 << " ";
   }

   // Char
   Pilha<char> c{10};
   char v3 = ' ';

   cout << "\nInserindo itens tipo char na pilha: \n";

   while(v3 != '.') {
      cin >> v3;
      c.push(v3);
   }

   cout << "Removendo itens... \n";

   while(!(c.isEmpty())) {
      c.pop(v3);
      cout << v3 << " ";
   }

   return 0;
}