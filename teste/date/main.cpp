#include <iostream>
#include "date.h"

using namespace std;
 
int main() {
   Date aniversario {15, 5, 2003};
   aniversario.setDay(16);

   cout << "Meu aniversario: ";
   aniversario.print();

   Date today {2, 5, 2023};
   today.setDay(5).setMonth(5).setYear(23);
   cout << "\nHoje e: ";
   today.print();

   cout << "\nInstancias ativas: " << Date::howManyInstances() << endl;

   return 0;
}