#include <iostream>

using namespace std;

int main(void) {
   int largura = 0, altura = 0, op;
   char borda, preenchimento;

   // Obtendo as informações
   cout << "Programa para desenhar um retângulo!\n" << endl;
   cout << "Digite a largura desejada: ";
   cin >> largura;

   cout << "\nDigite a altura desejada: ";
   cin >> altura;

   cout << "\nDigite o caracter usada pra desenhar a borda: ";
   cin >> borda;

   cout << "\nDigite o caracter usada para preencher o retângulo: ";
   cin >> preenchimento;

   cout << "\nEscolha se o retângulo vai ser preenchido ou não\n [1] Sim\n [2] Não\n -> ";
   cin >> op;
   cout << endl;

   // Desenhando o retângulo:
   for (int i=1; i<=altura; i++) {
      for (int j=1; j<=largura; j++) {
         if ((i==1) || (i==altura) || (j==1) || (j==largura))
            cout << borda;
         else if (op == 1)
            cout << preenchimento;
         else 
            cout << " ";
      }
      cout << endl;
   }
}