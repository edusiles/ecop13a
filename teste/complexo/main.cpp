#include <iostream>
#include "complexo.h"

using namespace std;

int main() {
   Complexo n1 {10, 20}, n2 {5, 15};

   cout << "N1 = ";
   n1.print();

   cout << "\nN2 = ";
   n2.print();

   Complexo n3 = n1.add(n2);
   cout << "\nN1 + N2 = ";
   n3.print();

   Complexo n4 = n1.sub(n2);
   cout << "\nN1 - N2 = ";
   n4.print();

   return 0;
}