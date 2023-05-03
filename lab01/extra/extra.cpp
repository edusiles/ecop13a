#include <iostream>
#include <cretangulo.h> 

using namespace std;

int main(void) {
   int comp=0, larg=0, op;
   char borda, preenchimento;

   cout << "\nPrograma para tratar um retangulo!\n";
   cout << "O Retangulo deve ter comprimento e largura entre 0 e 20!\n\n";

   // Obtenção dos dados
   cout << "Digite o comprimento do retangulo: ";
   cin >> comp;

   cout << "Digite a largura do retangulo: ";
   cin >> larg;

   Retangulo ret(comp, larg); // Cria e atribui valores ao objeto

   do {

      if (ret.valid_comprimento() == false) { // Verificando comprimento
         cout << "\nComprimento Inválido! Digite novamente!\n";
         cin >> comp;
      }

      if (ret.valid_largura() == false) { // Verificando largura
         cout << "\nLargura Inválida! Digite novamente!\n";
         cin >> larg;
      }
   } while ((ret.valid_comprimento() != true) && (ret.valid_largura() != true));
   
   // Exibe a área do retangulo:
   cout << "A area do retângulo é " << ret.area() << endl;

   // Exibe o perímetro do retangulo:
   cout << "O perímetro do retângulo é " << ret.perimetro() << endl;

   // Exibir o retangulo na tela:
   cout << "Digite o caracter da borda do retângulo\n";
   cin >> borda;

   cout << "Na exibição do retângulo você deseja preenche-lo com algum caracter?\n";
   cout << "[1] Sim  [2] Não\n";
   cin >> op;
   
   if (op == 1) {
      cout << "Digite o caracter do preenchimento do retângulo\n";
      cin >> preenchimento;
   }

   ret.imprimir(op, borda, preenchimento);

   // Exibir se o retangulo é quadrado:
   if (ret.quadrado())
      cout << "O retângulo é quadrado!\n";
   else
      cout << "O retângulo não é quadrado!\n";
   
   cout << "Fim do programa!\n" << endl;

   return 0;
}