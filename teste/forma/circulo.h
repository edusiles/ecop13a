#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma.h"

class Circulo : public Forma {
   private:
      double raio;
   
   public:
      // Construtor:
      Circulo(double = 0, double = 0, double = 0);

      // Destrutor:
      ~Circulo() { }

      // Setters:
      void setRaio(double);

      // Getters:
      double getRaio();

      // Others:
      virtual void imprimeDados();
      virtual double area();
};

#endif