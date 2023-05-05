#ifndef PONTOCARTESIANO_H
#define PONTOCARTESIANO_H

#include <iostream>

using namespace std;

class PontoCartesiano {
   private:
      double x, y;

   public:
      // Construtor:
      PontoCartesiano(double, double);
      
      // Destrutor:
      ~PontoCartesiano() { }

      // Setters:
      void setX(double x);
      void setY(double y);

      // Getters:
      double getX() const;
      double getY() const;

      // Métodos:
      PontoCartesiano& operator++();
      PontoCartesiano operator++(int);
};

#endif