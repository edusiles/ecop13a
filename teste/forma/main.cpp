#include "retangulo.h"
#include "circulo.h"
#include <iostream>

using namespace std;

int main() {
   Forma* p1 = new Forma{10.0, 20.0};

   cout << "\nForma:\n";
   p1->imprimeDados();
   cout << "\nArea = " << p1->area() << endl;

   cout << "\nRetangulo:\n";
   Forma* ret1 = new Retangulo{0, 0, 10, 50};
   ret1->imprimeDados();

   cout << "\nCirculo:\n";
   Forma* cir1 = new Circulo{0, 0, 10};
   cir1->imprimeDados();

   return 0;
}