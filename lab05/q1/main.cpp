#include <iostream>
#include "polinomio.h"

using namespace std;

int main() {
  Polinomio p1(3), p2(4);

  cout << "Digite os coeficientes do primeiro polinomio (grau 3): ";
  cin >> p1;
  cout << "Digite os coeficientes do segundo polinomio (grau 4): ";
  cin >> p2;

  cout << "Primeiro polinomio: " << p1 << endl;
  cout << "Segundo polinomio: " << p2 << endl;

  Polinomio soma = p1 + p2;
  Polinomio diferenca = p1 - p2;

  cout << "Soma: " << soma << endl;
  cout << "Diferenca: " << diferenca << endl;

  return 0;
}
