#include <iostream>
#include "prefeito.h"

using namespace std;

void menu() {
   cout << "\n\nDigite qual tipo de politico deseja criar: ";   
   cout << "\n1 - Politico";
   cout << "\n2 - Presidente";
   cout << "\n3 - Governador";
   cout << "\n4 - Prefeito";
   cout << "\n0 - Nenhum (sair)\n- ";
}

int main() {
   Politico *politicos[5];

   int op, x=0;
   string nome, partido, pais, estado, cidade;

   while (op != 0 && x < 5) {
      menu();
      cin >> op;
      
      switch(op) {
         case 0:
            cout << "\nNenhum politico criado!\nFim do programa\n" << endl;
            break;
         case 1:
            cout << "\nDigite os dados:\nNome: ";
            cin >> nome; 
            cout << "\nAgora entre com o partido: ";
            cin >> partido;

            politicos[x] = new Politico{nome, partido};

            cout << "\nPolitico criado!\n";
            x++;
            break;
         case 2:
            cout << "\nDigite os dados:\nNome: ";
            cin >> nome; 
            cout << "\nPartido: ";
            cin >> partido;
            cout << "\nPais: ";
            cin >> pais;

            politicos[x] = new Presidente{nome, partido, pais};

            cout << "\nPresidente criado!\n";

            x++;
            break;
         case 3:
            cout << "\nDigite os dados:\nNome: ";
            cin >> nome; 
            cout << "\nPartido: ";
            cin >> partido;
            cout << "\nPais: ";
            cin >> pais;
            cout << "\nEstado: ";
            cin >> estado;

            politicos[x] = new Governador{nome, partido, pais, estado};
            
            cout << "\nGovernador criado!\n";

            x++;
            break;
         case 4:
            cout << "\nDigite os dados:\nNome: ";
            cin >> nome; 
            cout << "\nPartido: ";
            cin >> partido;
            cout << "\nPais: ";
            cin >> pais;
            cout << "\nEstado: ";
            cin >> estado;
            cout << "\nCidade: ";
            cin >> cidade;

            politicos[x] = new Prefeito{nome, partido, pais, estado, cidade};
            
            cout << "\nPrefeito criado!\n";

            x++;
            break;
         default:
            cout << "\nOpcao incorreta!\n";
            break;
      }
   }

   cout << "\n\nPoliticos criados: \n";
   for (auto x : politicos) {
      cout << "\n";
      x->imprime();
      cout << endl;
   }
   cout << endl;

   delete[] *politicos;

   return 0;
}