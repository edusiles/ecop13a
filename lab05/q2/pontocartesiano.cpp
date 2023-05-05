#include <iostream>
#include "pontocartesiano.h"

using namespace std;

PontoCartesiano::PontoCartesiano(double x = 0.0, double y = 0.0) {
   this->x = x;
   this->y = y;
}

void PontoCartesiano::setX(double x) {
   this->x = x;
}

void PontoCartesiano::setY(double y) {
   this->y = y;
}

double PontoCartesiano::getX() const {
   return x;
}

double PontoCartesiano::getY() const {
   return y;
}

PontoCartesiano& PontoCartesiano::operator++() { // pré-incremento
   x++;
   y++;

   return *this;
}

PontoCartesiano PontoCartesiano::operator++(int) { // pós-incremento
   PontoCartesiano tmp(*this);
   operator++();

   return tmp;
}