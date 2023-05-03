#include <iostream>

using namespace std;

int verificacao(int num) {
   int aux1=num, digitos=0, inverso, aux2;

   // Verificação dos 7 dígitos
   do {
      digitos++;
      aux1 /= 10;
   } while(aux1 != 0);

   if (digitos != 7) {
      return 0; // Número não possuí 7 digitos
   }

   // Verificacao se é palíndromo:
   aux2 = num;
   inverso = 0;

   while (aux2 != 0) {
      inverso = (inverso * 10) + (aux2 % 10);
      aux2 /=10;
   }

   if (inverso == num) {
      return 1; // Número é palíndromo
   } else {
      return 2; // Número não é palíndromo
   }
}

int main(void) {
   int num;

   cout << "Programa para testar palíndromos de 7 digitos!\n";

   // Obtenção do número:
   cout << "Digite um número: ";
   cin >> num;

   // Verificação dos digitos:
   while (verificacao(num) == 0) {
      cout << "Número não possui 7 digitos!\n";
      cout << "Digite outro número: ";
      cin >> num;
   }
   
   // Exibição do resultado
   if (verificacao(num) == 1) {
      cout << "O número é um palíndromo!" << endl;
   } else {
      cout << "Número não é um palíndromo!" << endl;
   }
   
}