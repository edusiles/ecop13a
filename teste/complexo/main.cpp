#include <iostream>
#include "complexo.h"

using namespace std;

int main() {
   Complexo n1 {10, 20}, n2 {5, 15};

   cout << "N1 = ";
   n1.print();

   cout << "\nN2 = ";
   n2.print();

   Complexo n3; // mesmo que: n3 = n1.operator+(n2);
   Complexo n4; // mesmo que: n3 = n1.operator-(n2);

   if(!n3 && !n4)
      cout << "\n\nN3 e N4 inicialmente iguais a 0.";

   n3 = n1 + n2; // mesmo que: n3 = n1.operator+(n2);
   n4 = n1 - n2;

   cout << "\nN1 + N2 = ";
   n3.print();

   cout << "\nN1 - N2 = ";
   n4.print();
 
   n1 = ++n2;
 
   cout << "\n\nDepois do incremento:\n" << "N1 = ";
   n1.print();

   cout << "\nN2 = ";
   n2.print();

   return 0;
}