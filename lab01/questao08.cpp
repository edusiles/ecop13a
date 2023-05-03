#include <iostream>
#include <cmath>

using namespace std;

// Função de conversão:
int conversao(int num) {
   int x = 0, dec = 0, aux = 0;

   for (int j=0; j<10; j++) { // Verificando um número (Bin) de até 10 dígitos
      x = num%10;
      num /= 10;
      dec += x * pow(2, aux);   
      aux++;
   }

   return dec;
}

int main(void) {
   int binario;

   // Obtenção dos dados:
   cout << "Digite o número binário que deseja converter: ";
   cin >> binario;

   // Exibição do resultado:
   cout << "O número em base decimal é: " << conversao(binario) << endl;
}