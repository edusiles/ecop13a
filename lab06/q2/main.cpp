#include "cilindro.h"

int main() {
   Ponto p {2, 4};
   Circulo c1 {1, 2, 5};
   Cilindro c2 {0, 0, 2, 4};

   cout << "\nExibicao das informacoes: " << endl;
   cout << "\nPonto: " << endl << p << endl;
   cout << "\nCirculo: " << endl << c1 << "\nArea: " << c1.area() << endl;
   cout << "\nCilindro: " << endl << c2 << "\nArea: " << c2.area() << "\nVolume: " << c2.volume() << endl << endl;

   return 0;
}