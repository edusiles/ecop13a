#include <iostream>
#include "pontocartesiano.h"

using namespace std;

int main() {
   PontoCartesiano p1(1.0, 2.0);
   PontoCartesiano p2 = ++p1; // pré-incremento
   PontoCartesiano p3 = p1++; // pós-incremento

   cout << "Ponto 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
   cout << "Ponto 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
   cout << "Ponto 3: (" << p3.getX() << ", " << p3.getY() << ")" << endl;
   
   return 0;
}