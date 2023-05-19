#include <iostream>
#include "cilindro.h"
#include "prisma.h"

using namespace std;

void menu() {
   cout << "\n\nDigite qual forma deseja criar: ";   
   cout << "\n1 - Ponto";
   cout << "\n2 - Circulo";
   cout << "\n3 - Cilindro";
   cout << "\n4 - Quadrado";
   cout << "\n5 - Prisma";
   cout << "\n0 - Nenhum (sair)\n- ";
}

int main() {
   Ponto *formas[3];

   int op = 10, i=0;
   float x, y, raio, lado, altura;

   while (op != 0 && i < 3) {
      menu();
      cin >> op;
      
      switch(op) {
         case 0:
            cout << "\nFim do programa!\n" << endl;
            break;
         case 1:
            cout << "\nDigite os dados no seguinte formato [x y]: \n";
            cin >> x >> y;

            formas[i] = new Ponto {x, y};

            cout << "\nPonto criado!\n";
            i++;
            break;
         case 2:
            cout << "\nDigite os dados no seguinte formato [x y raio]: \n";
            cin >> x >> y >> raio;

            formas[i] = new Circulo {x, y, raio};

            cout << "\nCirculo criado!\n";

            i++;
            break;
         case 3:
            cout << "\nDigite os dados no seguinte formato [x y raio altura]: \n";
            cin >> x >> y >> raio >> altura;

            formas[i] = new Cilindro {x, y, raio, altura};

            cout << "\nCilindro criado!\n";

            i++;
            break;
         case 4:
            cout << "\nDigite os dados no seguinte formato [x y lado]: \n";
            cin >> x >> y >> lado;

            formas[i] = new Quadrado {x, y, lado};

            cout << "\nQuadrado criado!\n";

            i++;
            break;
         case 5:
            cout << "\nDigite os dados no seguinte formato [x y lado altura]: \n";
            cin >> x >> y >> lado >> altura;

            formas[i] = new Prisma {x, y, lado, altura};

            cout << "\nPrisma criado!\n";

            i++;
            break;
         default:
            cout << "\nOpcao incorreta!\n";
            break;
      }
   }

   cout << endl << "\n\nFormas criadas: \n";
   for (auto j : formas) {
      cout << "\n";
      j->imprime();
      cout << "\n\n";
   }
   cout << endl;

   delete [] *formas;

   return 0;
}