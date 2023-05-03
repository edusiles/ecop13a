#include <iostream>
#include <regularpolygon.h>

#define PI 3.141592

using namespace std;

RegularPolygon::RegularPolygon() {
   this->sides = 3;
   this->length = 2;
}

RegularPolygon::RegularPolygon(int s, int l) {
   this->sides = s;
   this->length = l;
}

void RegularPolygon::preenche(int x, int y) {
   this->sides = x;
   this->length = y;
}

float RegularPolygon::area() {
   return (0.25 * (sides * (length * length))) * (cos(PI/sides) / sin(PI/sides));
}

int RegularPolygon::perimetro() {
   return sides*length;
}

string RegularPolygon::nome() {
   switch (sides) {
      case 10:
         return "Decagono"; break;
      case 9:
         return "Eneagono"; break;
      case 8:
         return "Octogono"; break;
      case 7:
         return "Heptagono"; break;
      case 6:
         return "Hexagono"; break;
      case 5:
         return "Pentagono"; break;
      case 4:
         return "Quadrado"; break;
      case 3:
         return "Triângulo"; break;
      default:
         return "Polígono não identificado!"; break;
   } 
}