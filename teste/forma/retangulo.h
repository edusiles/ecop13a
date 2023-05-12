#ifndef RETANGULO_H
#define RETANGULO_H

#include "forma.h"

class Retangulo : public Forma {
   private:
      double base, height;

   public:
      // Construtor:
      Retangulo(double = 0, double = 0, double = 0, double = 0);

      // Destrutor:
      ~Retangulo() { }

      // Setters:
      void setBase(double num);
      void setAltura(double num);

      // Getters:
      double getBase() { return base; }
      double getHeight() { return height; }

      virtual void imprimeDados();
      virtual double area();
};

#endif