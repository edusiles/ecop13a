#include <iostream>
#include <cretangulo.h> 

using namespace std;

int main(void) {
   int length=0, width=0, op;
   char border, fill;

   cout << "\nPrograma para tratar um retangulo!\n";
   cout << "O Retangulo deve ter comprimento e largura entre 0 e 20!\n\n";

   // Criação do objeto:
   CRetangulo rectangles[5];
   
   // Obtenção dos dados:
   for (int i=0; i<5; i++) {
      cout << "Digite as informações do"<< i << "º retangulo:" << endl;
      rectangles[i].leitura();
      cout << endl;
   }
   
   // Exibição dos retangulos:
   for (int x; x<5; x++) {
      // Exibe a área do retangulo:
      cout << "A area do retângulo é " << rectangles[x].calcArea() << endl;

      // Exibe o perímetro do retangulo:
      cout << "O perímetro do retângulo é " << rectangles[x].calcPerimeter() << endl;

      // Exibir o retangulo na tela:
      cout << "Digite o caracter da borda do retângulo\n";
      cin >> border;

      cout << "Na exibição do retângulo você deseja preenche-lo com algum caracter?\n";
      cout << "[1] Sim  [2] Não\n";
      cin >> op;
      
      if (op == 1) {
         cout << "Digite o caracter do preenchimento do retângulo\n";
         cin >> fill;
      }

      rectangles[x].printRectangle(op, border, fill);

      // Exibir se o retangulo é quadrado:
      if (rectangles[x].isSquare())
         cout << "O retângulo é quadrado!\n";
      else
         cout << "O retângulo não é quadrado!\n";
   }

   cout << "Exibição das informações dos retângulos:" << endl;
   for (int y=0; y<5; y++) {
      rectangles[y].rectangleDimensions();
      cout << endl;
   }

   // Criação do objeto com ponteiros:
   cout << endl << " 6º Retangulo com ponteiro:" << endl;
   CRetangulo *rectangle6 = new CRetangulo;

   rectangle6->leitura();
   rectangle6->rectangleDimensions();
   
   // Finalização do programa:
   cout << "Fim do programa!\n" << endl;

   // Destrução dos objetos:
   delete rectangle6;
   rectangles->~CRetangulo();

   return 0;
}