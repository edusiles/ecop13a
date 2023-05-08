#ifndef PONTO_H
#define PONTO_H

#include <iostream>

using namespace std;

class Ponto {
   protected:
      float x, y;

   public:
      // Construtor:
      Ponto(float n1, float n2) : x{n1}, y{n2} { }

      // Destrutor
      ~Ponto() { }

      // Setters:
      void setX(float num) { x = num;}
      void setY(float num) { y = num;}

      // Getters:
      float getX() {return x;}
      float getY() {return y;}

      // Operadores:
      friend istream& operator>>(istream& in, Ponto& p) {
         in >> p.x >> p.y;

         return in;
      }

      friend ostream& operator<<(ostream& out, Ponto& p) {
         out << "(" << p.x << ", " << p.y << ")";

         return out;
      }
};

#endif