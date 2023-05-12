#include "circulo.h"
#include <iostream>

using namespace std;

// Construtor:
Circulo::Circulo(double xx, double yy, double r) : Forma{xx, yy}, raio{r} { }

// Setters:
void Circulo::setRaio(double r) {
   if (r > 0)
      raio = r;
   else 
      cout << "\nNumero incorreto!\n";
}

// Getters:
double Circulo::getRaio() {
   return raio;
}

// Others:
void Circulo::imprimeDados() {
   Forma::imprimeDados();
   cout << "\nRaio: " << getRaio() << "\nArea: " << area() << endl;
}

double Circulo::area() {
   return 3.14159 * getRaio() * getRaio();
}