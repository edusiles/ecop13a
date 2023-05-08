#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <cmath>

using namespace std;

class Polinomio {
   private:
      int n;       // ordem do polinômio
      double* coefs;  // vetor de coeficientes

   public:
      // Construtor
      Polinomio(int ordem) {  // construtor
         n = ordem;
         coefs = new double[n+1];  // alocar espaço para coeficientes

         for (int i = 0; i <= n; i++) {
            coefs[i] = 0;  // inicializar coeficientes com zero
         }
      }

      // Destrutor
      ~Polinomio() {  // destrutor
         delete[] coefs;  // liberar memória alocada para coeficientes
      }

      // Métodos para acessar e modificar os coeficientes
      double& operator[](int i) { return coefs[i]; }
      double operator[](int i) const { return coefs[i]; }

      // Método para calcular o valor do polinômio em um ponto x
      double calcular(double x) const {
         double resultado = 0;
         
         for (int i = 0; i <= n; i++) {
            resultado += coefs[i] * pow(x, i);
         }

         return resultado;
      }

      // Método para imprimir o polinômio
      void imprimir() const {
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
      Polinomio operator+(const Polinomio& outro) const {
         int maior_ordem = max(n, outro.n);
         Polinomio resultado(maior_ordem);

         for (int i = 0; i <= maior_ordem; i++) {
            resultado[i] = coefs[i] + outro[i];
         }

         return resultado;
      }

      // Sobrecarga do operador de Subtração(-)
      Polinomio operator-(const Polinomio& outro) const {
         int maior_ordem = max(n, outro.n);
         Polinomio resultado(maior_ordem);

         for (int i = 0; i <= maior_ordem; i++) {
            resultado[i] = coefs[i] - outro[i];
         }

         return resultado;
      }

      // Sobrecarga do operador de Leitura(>>)
      friend istream& operator>>(istream& is, Polinomio& p) {
         for (int i = 0; i <= p.n; i++) {
            is >> p.coefs[i];
         }

         return is;
      }

      // Sobrecarga do operador de Impressão(<<)
      friend ostream& operator<<(ostream& os, const Polinomio& p) {
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

      // Derivada:
      Polinomio derivada() const {
         Polinomio resultado(n-1);

         for (int i = 1; i <= n; i++) {
            resultado[i-1] = i * coefs[i];
         }

         return resultado;
      }

      // Raízes reais:
      double newton(Polinomio p, double x0, double m) { // Método de Newton
         double eps = 0.000001; // Epislon

         for (int i = 0; i < m; i++) {
            double fx = p.calcular(x0); // valor do polinômio em x
            double dfx = p.derivada().calcular(x0); // valor da derivada do polinômio em x
            double x_novo = x0 - fx/dfx; // nova aproximação da raiz

            if (abs(x_novo - x0) < eps) {
                  return x_novo; // retorna a raiz encontrada
            }

            x0 = x_novo; // atualiza a aproximação da raiz
         }

         // Se não encontrou a raiz, retorna NaN
         return numeric_limits<double>::quiet_NaN();
      }

};

#endif