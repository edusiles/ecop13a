#include <iostream>
#include "phonenumber.h"

using namespace std;

int main() {
   Phonenumber phone;

   cout << "Entre com o telefone no formato XX XX XXXXXXXXX (Code) (DDD) (Numero): ";

   cin >> phone;

   cout << "O telefeone e: " << phone << endl;

   return 0;
}
