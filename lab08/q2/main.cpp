#include <iostream>
#include <vector>
#include <new>

using namespace std;

int main() {
   try {
      vector<double*> pointers;

      while (true) {
         double* ptr = new double[1000000000];  // Tentativa de alocação de um grande vetor de double
         pointers.push_back(ptr);
      }
   }
   catch (const bad_alloc& e) {
      cout << "Erro: Falta de memoria!\n";
   }

   return 0;
}
