#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

class Circulo : public Ponto {
   protected:
      float raio;

   public:
      // Construtor:
      Circulo(float n1, float n2, float n3) : Ponto{n1, n2}, raio{n3} { }

      // Destrutor
      ~Circulo() { }

      // Setters:
      void setRaio(float num) {raio = num;}

      // Getters:
      float getRaio() {return raio;}

      // Operadores:
      friend istream& operator>>(istream& in, Circulo& c) {
         in >> c.raio;

         return in;
      }

      friend ostream& operator<<(ostream& out, Circulo& c) {
         out << "(" << c.x << ", " << c.y << ")" << "\nRaio: " << c.raio;

         return out;
      }

      // Area:
      float area() {return 3.141592 * raio * raio;}
};

#endif