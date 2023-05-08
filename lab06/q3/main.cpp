// #include <iostream>
#include "polinomio.h"

// using namespace std;

int main() {
   Polinomio p(3);
   p[0] = -4;
   p[1] = 3;
   p[2] = -2;
   p[3] = 1;

   double raiz = p.newton(p, 2, 100);

   cout << "Uma raiz real do polinomio e: " << raiz << endl;
   
   return 0;
}