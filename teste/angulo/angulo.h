#ifndef ANGULO_H
#define ANGULO_H

#include <iostream>

using namespace std;

class Angulo {
   private:
      float grau;

   public:
      // Constructor:
      Angulo(float = 0);

      // Destructor:
      ~Angulo();

      // Setters:
      void setGrau(float);

      // Getters:
      float getGrau();

      // Operators:
      Angulo operator+(Angulo&);
      Angulo operator-(Angulo&);
      friend ostream& operator<<(ostream&, const Angulo&);
      friend istream& operator>>(istream&, Angulo&);
      operator double();

      // Others:
      float radiano();
      float seno();
      float cosseno();
      float tangente();
      float complementar();
};

#endif