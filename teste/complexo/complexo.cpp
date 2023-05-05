#include <iostream>
#include "complexo.h"

using namespace std;

// Construtor:
Complexo::Complexo(float r, float i) { // Padrão 0.0 e 0.0
   real = r;
   imaginary = i;
}

// Destrutor:
Complexo::~Complexo() { }

// Setters:
void Complexo::setReal(float r) {
   if(r > 0)
      real = r;
   else
      cout << "Incorrect number!";
}

void Complexo::setImaginary(float i) {
   if(i > 0)
      imaginary = i;
   else
      cout << "Incorrect number!";
}

// Getters:
float Complexo::getReal() {
   return real;
}

float Complexo::getImaginary() {
   return imaginary;
}

// Outros:
void Complexo::print() { // Impressão

}

// Sobrecarga de operadores:
Complexo Complexo::add(Complexo&) { // Soma

}

Complexo Complexo::sub(Complexo&) { // Subtração

}