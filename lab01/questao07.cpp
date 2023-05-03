#include <iostream>

using namespace std;

// Função para calcular o MDC:
int mdc(int n1, int n2) {
   return n2 ? mdc(n2, n1%n2) : abs(n1);
}

int main(void) {
   int n1, n2;

   // Obtenção dos números:
   cout << "\nPrograma para calcular o máximo divisor comum!\n" << endl;
   cout << "Digite o primeiro número: ";
   cin >> n1;

   cout << "Digite o segundo número: ";
   cin >> n2;

   // Calculo e exibição do resultado:
   cout << "O resultado do MDC é: " << mdc(n1, n2) << endl;
}