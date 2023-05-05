#include <iostream>
#include "cfracao.h"

using namespace std;

int main() {
   // Criando frações:
   CFracao f1(2, 5);
   CFracao f2(1, 3);

   // Testando operadores de soma, subtração, multiplicação e divisão:
   CFracao resultado_soma = f1 + f2;
   CFracao resultado_subtracao = f1 - f2;
   CFracao resultado_multiplicacao = f1 * f2;
   CFracao resultado_divisao = f1 / f2;

   // Imprimindo resultados:
   cout << "Soma: " << resultado_soma << endl;
   cout << "Subtracao: " << resultado_subtracao << endl;
   cout << "Multiplicacao: " << resultado_multiplicacao << endl;
   cout << "Divisao: " << resultado_divisao << endl;

   // Testando operadores de comparação:
   bool menor_que = f1 < f2;
   bool maior_que = f1 > f2;
   bool menor_ou_igual = f1 <= f2;
   bool maior_ou_igual = f1 >= f2;
   bool igual = f1 == f2;
   bool diferente = f1 != f2;

   // Iprimindo resultados:
   cout << "Menor que: " << menor_que << endl;
   cout << "Maior que: " << maior_que << endl;
   cout << "Menor ou igual: " << menor_ou_igual << endl;
   cout << "Maior ou igual: " << maior_ou_igual << endl;
   cout << "Igual: " << igual << endl;
   cout << "Diferente: " << diferente << endl;

   // Testando operadores de leitura e escrita:
   CFracao f3;
   cout << "Digite uma fração no formato 'numerador/denominador': ";
   cin >> f3;
   cout << "A fração digitada foi: " << f3 << endl;

   // Testando método de impressão:
   cout << "Impressão da fração 3: ";
   f3.printFracao();
   cout << endl;

   return 0;
}