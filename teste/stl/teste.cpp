#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

   vector<int> idades;
   vector<int>::iterator it;

   idades.push_back(20); // adiciona elemento no final do vetor
   idades.push_back(17);
   idades.push_back(45);
   idades.push_back(35);

   cout << "Vetor desordenado: ";
   for(int i = 0; i < idades.size(); i++) {
      cout << idades[i] << " ";
   }

   // Ordenação
   sort(idades.begin(), idades.end());

   cout << "\nVetor ordenado: ";
   for (it = idades.begin(); it != idades.end(); ++it) {
      cout << (*it) << " ";
   }

   return 0;
}