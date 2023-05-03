#include <iostream>

using namespace std;

int soma(int qt) {
   return (qt == 1) ? 1 : qt + soma(qt - 1);
}

int main(void) {
   int quantidade = 0;

   cout << "\nPrograma para somar os primeiros números inteiros!\n";
   cout << "\nDigite quantos números inteiros deseja somar: ";
   cin >> quantidade;

   cout << "\nSoma = " << soma(quantidade) << endl;
}