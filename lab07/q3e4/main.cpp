#include <iostream>
#include "cilindro.h"

using namespace std;

void menu() {
   cout << "\n\nDigite qual forma deseja criar: ";   
   cout << "\n1 - Ponto";
   cout << "\n2 - Circulo";
   cout << "\n3 - Cilindro";
   cout << "\n0 - Nenhum (sair)\n- ";
}

int main() {
   Ponto *formas[3];

   int op = 10, i=0;
   float x, y, raio, altura;

   while (op != 0 && i < 3) {
      menu();
      cin >> op;
      
      switch(op) {
         case 0:
            cout << "\nFim do programa!\n" << endl;
            break;
         case 1:
            cout << "\nDigite os dados:\nX: ";
            cin >> x; 
            cout << "Y: ";
            cin >> y;

            formas[i] = new Ponto {x, y};

            cout << "\nPonto criado!\n";
            i++;
            break;
         case 2:
            cout << "\nDigite os dados:\nX: ";
            cin >> x; 
            cout << "Y: ";
            cin >> y;
            cout << "Raio: ";
            cin >> raio;

            formas[i] = new Circulo {x, y, raio};

            cout << "\nCirculo criado!\n";

            i++;
            break;
         case 3:
            cout << "\nDigite os dados:\nX: ";
            cin >> x; 
            cout << "Y: ";
            cin >> y;
            cout << "Raio: ";
            cin >> raio;
            cout << "Altura: ";
            cin >> altura;

            formas[i] = new Cilindro {x, y, raio, altura};

            cout << "\nCilindro criado!\n";

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