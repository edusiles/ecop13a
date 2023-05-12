#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"

class Cilindro : public Circulo {
   protected:
      float altura;

   public:
      // Construtor:
      Cilindro(float n1, float n2, float n3, float n4) : Circulo{n1, n2, n3}, altura{n4} { }

      // Destrutor
      ~Cilindro() { }

      // Setters:
      void setAltura(float num) {altura = num;}

      // Getters:
      float getAltura() {return altura;}

      // Operadores:
      friend istream& operator>>(istream& in, Cilindro& c) {
         in >> c.altura;

         return in;
      }

      friend ostream& operator<<(ostream& out, Cilindro& c) {
         out << "(" << c.x << ", " << c.y << ")" << "\nRaio: " << c.raio << "\nAltura: " << c.altura;

         return out;
      }

      // Area:
      float area() {return (2 * 3.141592 * raio * altura);}
      
      // Volume:
      virtual float volume() {return (Circulo::area()) * altura;}

      virtual void imprime() {
         cout << "Cilindro: \n";
         Ponto::imprime();
         cout << "\nRaio: " << raio;
         cout << "\nAltura: " << altura;
      }
};

#endif