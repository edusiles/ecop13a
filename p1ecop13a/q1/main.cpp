#include <iostream>
#include "bigint.h"

using namespace std;

int main() {

   BigInt* vetorBigInts[5], num;

   /** Testando += e -=
      BigInt num("300"), add("2");

      cout << "\n\nValor inicial: " << num;
      cout << "\n\nValor final 1: " << num.operator+=(add) << endl;
      cout << "\n\nValor final 2: " << num.operator-=(add) << endl << endl;
   */

   for (int y=0; y<5; y++) {
      cout << "Digite o numero da posicao " << y << ": ";
      cin >> num;

      vetorBigInts[y] = new BigInt {num};

      cout << "\n";
   }

   int i=0;
   
   for (auto x : vetorBigInts) {

      cout << "\nO numero digitado de indice " << i;

      if(x->palindromo())
         cout << " e palindromo!";
      else
         cout << " nao e palindromo!";

      cout << "\n\n";

      i++;
   }

   return 0;
}