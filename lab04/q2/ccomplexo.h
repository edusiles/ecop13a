#ifndef CCOMPLEXO_H
#define CCOMPLEXO_H

#include <iostream>

using namespace std;

class Complexo {
   private:
      double real;
      double imaginario;

   public:
      Complexo(double r = 0, double i = 0);

      double getReal() const {return real;}
      double getImaginario() const {return imaginario;}

      double modulo() const;

      Complexo operator+(const Complexo& c) const;
      Complexo operator-(const Complexo& c) const;
      Complexo operator*(const Complexo& c) const;
      Complexo operator/(const Complexo& c) const;

      bool operator<(const Complexo& c) const;
      bool operator>(const Complexo& c) const;
      bool operator<=(const Complexo& c) const;
      bool operator>=(const Complexo& c) const;
      bool operator==(const Complexo& c) const;
      bool operator!=(const Complexo& c) const;

      void imprimir() const;

      friend ostream& operator<<(ostream& os, const Complexo& c);
};

#endif