#include <iostream>
#include <cfracao.h>

using namespace std;

int main(void) {
   CFracao fraction1(8, 4);

   cout << "Numerador da primeira fração: " << fraction1.getNumerador() << endl;
   cout << "Denominador da primeira fração: " << fraction1.getDenominador() << endl << endl;

   CFracao fraction2(4, 2);

   cout << "Numerador da segunda fracao: " << fraction2.getNumerador() << endl;
   cout << "Denominador da segunda fracao: " << fraction2.getDenominador() << endl << endl;

   CFracao fraction3 = fraction1.somar(fraction2);

   cout << "Soma = ";
   fraction3.printFracao();
   cout << endl;

   fraction3 = fraction1.subtrair(fraction2);
   cout << "Subtração = ";
   fraction3.printFracao();
   cout << endl;

   fraction3 = fraction1.multiplicar(fraction2);
   cout << "Multipicação = ";
   fraction3.printFracao();
   cout << endl;

   fraction3 = fraction1.dividir(fraction2);
   cout << "Divisão = ";
   fraction3.printFracao();
   cout << endl;

   if (fraction1.menorQue(fraction2)) {
      cout <<  "Menor = ";
      fraction1.printFracao();
      cout << endl;
   } else {
      cout <<  "Menor = ";
      fraction2.printFracao();
      cout << endl;
   }

   if (fraction1.maiorQue(fraction2)) {
      cout <<  "Maior = ";
      fraction1.printFracao();
      cout << endl;
   } else {
      cout <<  "Maior = ";
      fraction2.printFracao();
      cout << endl;
   }

   if (fraction1.igual(fraction2))
      cout << "Iguais!" << endl;
   else
      cout << "Não iguais!" << endl;

   cout << "Float = ";
   fraction3.comoFloat();
   fraction3.printFracao();

   return 0;
}