#include <iostream>
#include <regularpolygon.h>

using namespace std;

int main(void) {
   RegularPolygon polygon;

   int sides, length;

   cout << "Entre com os lados:" << endl;
   cin >> sides;

   cout << "Entre com o comprimento dos lados:" << endl;
   cin >> length;

   polygon.preenche(sides, length);

   cout << "Nome: " << polygon.nome() << endl;
   cout << "Area: " << polygon.area() << endl;
   cout << "Perímetro: " << polygon.perimetro() << endl;

   polygon.~RegularPolygon();
}