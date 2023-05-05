#include <iostream>
#include "ccomplexo.h"
#include <cmath>

using namespace std;

Complexo::Complexo(double r = 0, double i = 0) {
   real = r;
   imaginario = i;
}

double Complexo::modulo() const {
   return sqrt(real * real + imaginario * imaginario);
}

Complexo Complexo::operator+(const Complexo& c) const {
   return Complexo(real + c.real, imaginario + c.imaginario);
}

Complexo Complexo::operator-(const Complexo& c) const {
   return Complexo(real - c.real, imaginario - c.imaginario);
}

Complexo Complexo::operator*(const Complexo& c) const {
   double r = real * c.real - imaginario * c.imaginario;
   double i = real * c.imaginario + imaginario * c.real;
   return Complexo(r, i);
}

Complexo Complexo::operator/(const Complexo& c) const {
   double denom = c.real * c.real + c.imaginario * c.imaginario;
   double r = (real * c.real + imaginario * c.imaginario) / denom;
   double i = (imaginario * c.real - real * c.imaginario) / denom;
   return Complexo(r, i);
}

bool Complexo::operator<(const Complexo& c) const {
   return real < c.real || (real == c.real && imaginario < c.imaginario);
}

bool Complexo::operator>(const Complexo& c) const {
   return real > c.real || (real == c.real && imaginario > c.imaginario);
}

bool Complexo::operator<=(const Complexo& c) const {
   return real <= c.real || (real == c.real && imaginario <= c.imaginario);
}

bool Complexo::operator>=(const Complexo& c) const {
   return real >= c.real || (real == c.real && imaginario >= c.imaginario);
}

bool Complexo::operator==(const Complexo& c) const {
   return real == c.real && imaginario == c.imaginario;
}

bool Complexo::operator!=(const Complexo& c) const {
   return !(*this == c);
}

void Complexo::imprimir() const {
   cout << real << " + " << imaginario << "i" << endl;
}

ostream& operator<<(ostream& os, const Complexo& c) {
   if (c.imaginario >= 0) {
      os << c.real << " + " << c.imaginario << "i";
   } else {
      os << c.real << " - " << -c.imaginario << "i";
   }

   return os;
}