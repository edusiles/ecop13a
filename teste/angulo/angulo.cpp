#include <iostream>
#include <cmath>
#include "angulo.h"

using namespace std;

// Constructor:
Angulo::Angulo(float g) : grau{g} { }

// Destructor:
Angulo::~Angulo() { }

// Setters:
void Angulo::setGrau(float g) {
   if (g >= 0 && g <= 360)
      grau = g;
   else
      cout << "Numero fora do intervalo permitido!\n";
}

// Getters:
float Angulo::getGrau() {
   return grau;
}

// Operators:
Angulo Angulo::operator+(Angulo& g) {
   return Angulo {this->grau + g.getGrau()};
}

Angulo Angulo::operator-(Angulo& g) {
   return Angulo {this->grau - g.getGrau()};
}

ostream& operator<<(ostream& out, const Angulo& g) {
   out << g.grau;

   return out;
}

istream& operator>>(istream& in, Angulo& g) {
   in >> g.grau;
   
   return in;
}

Angulo::operator double() {
   return grau;
}

// Others:
float Angulo::radiano() {
   return (this->grau * 3.141592) / 180;
}

float Angulo::seno() {
   return sin(this->grau);
}

float Angulo::cosseno() {
   return cos(this->grau);
}

float Angulo::tangente() {
   return tan(this->grau);
}

float Angulo::complementar() {
   return (90 - this->grau);
}