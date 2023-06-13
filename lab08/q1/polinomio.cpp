#include <iostream>
#include <cmath>
#include "polinomio.h"

using namespace std;

Polinomio::Polinomio(int ordem) {  // construtor
   n = ordem;
   coefs = new double[n+1];  // alocar espaço para coeficientes

   for (int i = 0; i <= n; i++) {
      coefs[i] = 0;  // inicializar coeficientes com zero
   }
}

Polinomio::~Polinomio() {  // destrutor
   delete[] coefs;  // liberar memória alocada para coeficientes
}

// Método para calcular o valor do polinômio em um ponto x
double Polinomio::calcular(double x) const {
   double resultado = 0;
   
   for (int i = 0; i <= n; i++) {
      resultado += coefs[i] * pow(x, i);
   }

   return resultado;
}

// Método para imprimir o polinômio
void Polinomio::imprimir() const {
   for (int i = n; i >= 0; i--) {
      if (coefs[i] != 0) {
         if (i == n)
            cout << coefs[i] << "x^" << i;
         else if (i == 1)
            cout << " + " << coefs[i] << "x";
         else
            cout << " + " << coefs[i] << "x^" << i;
      }
   }

   cout << endl;
}

// Sobrecarga do operador de Soma(+)
Polinomio Polinomio::operator+(const Polinomio& outro) const {
   int maior_ordem = max(n, outro.n);
   Polinomio resultado(maior_ordem);

   for (int i = 0; i <= maior_ordem; i++) {
      resultado[i] = coefs[i] + outro[i];
   }

   return resultado;
}

// Sobrecarga do operador de Subtração(-)
Polinomio Polinomio::operator-(const Polinomio& outro) const {
   int maior_ordem = max(n, outro.n);
   Polinomio resultado(maior_ordem);

   for (int i = 0; i <= maior_ordem; i++) {
      resultado[i] = coefs[i] - outro[i];
   }

   return resultado;
}

// Sobrecarga do operador de Leitura(>>)
istream& operator>>(istream& is, Polinomio& p) {
   for (int i = 0; i <= p.n; i++) {
      is >> p.coefs[i];
   }

   return is;
}

// Sobrecarga do operador de Impressão(<<)
ostream& operator<<(ostream& os, const Polinomio& p) {
   bool primeiro = true;

   for (int i = p.n; i >= 0; i--) {
      if (p.coefs[i] != 0) {
         if (!primeiro) {
            if (p.coefs[i] > 0)
               os << " + ";
            else
               os << " - ";
            
         } else {
            primeiro = false;
         }
         
         if (abs(p.coefs[i]) != 1 || i == 0)
            os << abs(p.coefs[i]);
         
         if (i > 1)
            os << "x^" << i;
         else if (i == 1)
            os << "x";
      }
   }

   if (primeiro) {
      os << "0";
   }

   return os;
}