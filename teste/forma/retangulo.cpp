#include "retangulo.h"
#include <iostream>

using namespace std;

// Construtor:
Retangulo::Retangulo(double xx, double yy, double b, double h) : Forma{xx, yy}, base{b}, height{h} { }

// Setters:
void Retangulo::setBase(double num) {
   if (num > 0)
      base = num;
   else
      cout << "\nNumero incorreto!\n";
}

void Retangulo::setAltura(double num) {
   if (num > 0)
      height = num;
   else
      cout << "\nNumero incorreto!\n";
}

void Retangulo::imprimeDados() {
   Forma::imprimeDados();
   cout << "\nBase: " << getBase() << "\nHeight: " << getHeight();
   cout << "\nArea: " << area() << endl;
}

double Retangulo::area() {
   return getBase()*getHeight();
}