#include "forma.h"
#include <iostream>

using namespace std;

Forma::Forma(double xx, double yy) : x{xx}, y{yy} { }

void Forma::imprimeDados() {
   cout << "Origem: (" << x << ", " << y << ")";
}