#ifndef QUADRADO_H
#define QUADRADO_H

#include "ponto.h"

class Quadrado : public Ponto {
   protected:
      float lado;

   public:
      // Construtor:
      Quadrado(float n1, float n2, float n3) : Ponto{n1, n2}, lado{n3} { }

      // Destrutor
      ~Quadrado() { }

      // Setters:
      void setLado(float num) {lado = num;}

      // Getters:
      float getLado() {return lado;}

      // Operadores:
      friend istream& operator>>(istream& in, Quadrado& q) {
         in >> q.lado;

         return in;
      }

      friend ostream& operator<<(ostream& out, Quadrado& q) {
         out << "(" << q.x << ", " << q.y << ")" << "\nLado: " << q.lado;

         return out;
      }

      // Area:
      virtual float area() {return lado * lado;}

      virtual void imprime() {
         cout << "Quadrado: \n";
         Ponto::imprime();
         cout << "\nLado: " << lado;
      }
};

#endif