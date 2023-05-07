#include <iostream>
#include "angulo.h"

using namespace std;

int main() {
   Angulo a1, a2;
   float g;

   // Angulo 1 usando verificacao de entrada
   do {
      cout << "\nAngulo 01 em graus: ";
      cin >> g;
      a1.setGrau(g);
      // cin >> a1;
   } while((g < 0) || (g > 360));

   // Angulo 2 usando sobrecarga de operador
   cout << "\nAngulo 02 em graus: ";
   cin >> a2;

   cout << "\nOperacoes: ";
   cout << "\nSoma dos angulos: " << a1 + a2;
   cout << "\nSubtracao dos angulos: " << a1 - a2;

   cout << "\n\nConversao dos angulos para radianos: ";
   cout << "\nAngulo 01: " << a1.radiano() << "\nAngulo 02: " << a2.radiano();

   cout << "\n\nFuncoes trigonometricas:" << "\n\nAngulo 01: ";
   cout << "\nSeno: " << a1.seno();
   cout << "\nCosseno: " << a1.cosseno();
   cout << "\nTangente: " << a1.tangente();

   cout << "\n\nAngulo 02: ";
   cout << "\nSeno: " << a2.seno();
   cout << "\nCosseno: " << a2.cosseno();
   cout << "\nTangente: " << a2.tangente();

   cout << "\n\nComplementares:";
   cout << "\nAngulo 01: " << a1.complementar();
   cout << "\nAngulo 02: " << a2.complementar();

   cout << "\n\nValor dos angulos pos conversao para double:";
   cout << "\nAngulo 01: " << (double)a1;
   cout << "\nAngulo 02: " << (double)a2;

   return 0;
}