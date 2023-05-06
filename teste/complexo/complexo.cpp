#include <iostream>
#include "complexo.h"

using namespace std;

// Construtor:
Complexo::Complexo(float r, float i) { // Padrão 0.0 e 0.0
   real = r;
   imaginary = i;
}

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
   cout << real << " + (" << imaginary << ")i ";
}

Complexo Complexo::add(Complexo& par) { // Soma
   float x = this->real + par.real; // Soma parte real do obj. que chamou a função e do passado como parâmetro
   float y = this->imaginary + par.imaginary; // Soma parte imaginária do obj. que chamou a função e do passado como parâmetro

   return Complexo {x, y};
}

Complexo Complexo::sub(Complexo& par) { // Subtração
   float x = this->real - par.real; // Subtrai parte real do obj. que chamou a função e do passado como parâmetro
   float y = this->imaginary - par.imaginary; // Subtrai parte imaginária do obj. que chamou a função e do passado como parâmetro

   return Complexo {x, y};
}

// Sobrecarga de operadores:
Complexo Complexo::operator+(Complexo& par) {
   float x = this->real + par.real; // Soma parte real do obj. que chamou a função e do passado como parâmetro
   float y = this->imaginary + par.imaginary; // Soma parte imaginária do obj. que chamou a função e do passado como parâmetro

   return Complexo {x, y};
}

Complexo Complexo::operator-(Complexo& par) {
   float x = this->real - par.real; // Soma parte real do obj. que chamou a função e do passado como parâmetro
   float y = this->imaginary - par.imaginary; // Soma parte imaginária do obj. que chamou a função e do passado como parâmetro

   return Complexo {x, y};
}

bool Complexo::operator!() {
   if (real == 0 && imaginary == 0)
      return true;

   return false;
}

Complexo& Complexo::operator++() { // Pré-incremento: n1 = ++n2; Onde: n2++; depois n1 = n2;
   this->real += 1;
   this->imaginary += 1;

   return *this; // Retorna referência para poder atribuir o obj. a outro
}

Complexo Complexo::operator++(int value) { // Pós-incremento: n1 = n2++; Onde: n1 = n2; depois n2++;
   Complexo temp = *this;

   this->real += 1;
   this->imaginary += 1;

   return temp; // Retorna referência para poder atribuir o obj. a outro
}