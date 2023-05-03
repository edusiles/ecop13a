#include <iostream>

using namespace  std;

// Função fatorial recursiva:
long fatorial(long n) {
   return (n < 2) ? 1 : n * fatorial(n - 1);
}

// Programa principal:
int main(void) {
   int num = 0;

   // Obtenção do número:
   cout << "\nDigite um número: ";
   cin >> num;

   // Exibição do resultado:
   cout << "\nO fatorial do número é: " << fatorial(num) << endl;
}