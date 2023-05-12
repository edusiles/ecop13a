#include "retangulo.h"
#include <iostream>

using namespace std;

int main() {
   Forma* p1 = new Forma{10.0, 20.0};

   cout << "\nForma:\n";
   p1->imprimeDados();
   cout << "\nArea = " << p1->area() << endl;

   cout << "\nRetangulo:\n";
   Retangulo* ret1 = new Retangulo{0, 0, 10, 50};
   ret1->imprimeDados();

   return 0;
}