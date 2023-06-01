#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>

using namespace std;

class Polinomio {
   private:
      int n;       // ordem do polinômio
      double* coefs;  // vetor de coeficientes

   public:
      // Construtor
      Polinomio(int ordem);

      // Destrutor
      ~Polinomio();

      // Métodos para acessar e modificar os coeficientes
      double& operator[](int i) { return coefs[i]; }
      double operator[](int i) const { return coefs[i]; }

      // Método para calcular o valor do polinômio em um ponto x
      double calcular(double x) const;

      // Método para imprimir o polinômio
      void imprimir() const;

      // Sobrecarga do operador de Soma(+)
      Polinomio operator+(const Polinomio& outro) const;

      // Sobrecarga do operador de Subtração(-)
      Polinomio operator-(const Polinomio& outro) const;

      // Sobrecarga do operador de Leitura(>>)
      friend istream& operator>>(istream& is, Polinomio& p);

      // Sobrecarga do operador de Impressão(<<)
      friend ostream& operator<<(ostream& os, const Polinomio& p);

};

#endif