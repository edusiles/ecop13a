#ifndef PRISMA_H
#define PRISMA_H

#include "quadrado.h"

class Prisma : public Quadrado {
   protected:
      float altura;

   public:
      // Construtor:
      Prisma(float n1, float n2, float n3, float n4) : Quadrado{n1, n2, n3}, altura{n4} { }

      // Destrutor
      ~Prisma() { }

      // Setters:
      void setAltura(float num) {altura = num;}

      // Getters:
      float getAltura() {return altura;}

      // Operadores:
      friend istream& operator>>(istream& in, Prisma& p) {
         in >> p.altura;

         return in;
      }

      friend ostream& operator<<(ostream& out, Prisma& p) {
         out << "(" << p.x << ", " << p.y << ")" << "\nLado: " << p.lado << "\nAltura: " << p.altura;

         return out;
      }

      // Area:
      float area() {return ((2 * Quadrado::area()) + (4 * lado * altura));}
      
      // Volume:
      virtual float volume() {return (Quadrado::area()) * altura;}

      virtual void imprime() {
         cout << "Prisma: \n";
         Ponto::imprime();
         cout << "\nLado: " << lado;
         cout << "\nAltura: " << altura;
      }
};

#endif