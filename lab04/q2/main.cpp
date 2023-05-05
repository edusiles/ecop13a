#include <iostream>
#include "ccomplexo.h"

using namespace std;

int main() {
   Complexo c1(3, 4);
   Complexo c2(1, 2);
   Complexo c3(3, 2);

   Complexo soma = c1 + c2;
   Complexo diferenca = c1 - c2;
   Complexo produto = c1 * c2;
   Complexo quociente = c1 / c2;

   cout << "Soma: ";
   soma.imprimir();

   cout << "Diferenca: ";
   diferenca.imprimir();

   cout << "Produto: ";
   produto.imprimir();

   cout << "Quociente: ";
   quociente.imprimir();

   if (c1 < c2)
      cout << "c1 e menor do que c2" << endl;
   else
      cout << "c1 nao e menor do que c2" << endl;

   if (c2 > c3)
      cout << "c2 e maior do que c3" << endl;
   else
      cout << "c2 nao e maior do que c3" << endl;

   if (c1 <= c3)
      cout << "c1 e menor ou igual a c3" << endl;
   else 
      cout << "c1 nao e menor ou igual a c3" << endl;
   
   if (c2 >= c3)
      cout << "c2 e maior ou igual a c3" << endl;
   else 
      cout << "c2 nao e maior ou igual a c3" << endl;

   if (c1 == c2)
      cout << "c1 e c2 sao iguais" << endl;
   else 
      cout << "c1 e c2 sao diferentes" << endl;

   return 0;
}