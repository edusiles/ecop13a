#include <iostream>
#include "vetor.h"

using namespace std;

int main() {

   try {
      Vetor<int, 10> v;
      int x;

      while (x != -1) {
         cout << "Digite um valor: ";
         cin >> x;
         
         if (x != -1)
            v.add(x);
      }   

      v.ordena();
      v.imprime();
   } catch (const exception &ex) {
      cerr << "Erro: " << ex.what() << endl;
   }

   return 0;
}