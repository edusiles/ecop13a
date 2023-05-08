#include <iostream>
#include "prefeito.h"

using namespace std;

int main() {
   Prefeito p {"Eduardo", "Partido", "Brasil", "MG", "Itajuba"};

   cout << endl;
   p.imprime();
   cout << endl;

   return 0;
}