#include <iostream>
#include <stack>

using namespace std;

void menu() {
   cout << "1. Inserir elemento\n";
   cout << "2. Remover elemento\n";
   cout << "3. Tamanho da pilha\n";
   cout << "4. Topo da pilha\n";
   cout << "5. Sair\n";
   cout << "\nEscolha [1 ~ 5]: ";
}

int main() {
   stack<int> pilha;
   int op = 0, value = 0;

   cout << "\n-------------------------\n";
   cout << "| Programa de Pilha STL |\n";
   cout << "-------------------------\n";

   while(op != 5) {
      cout << endl;
      menu();
      cin >> op;

      switch(op) {
         case 1:
            cout << "\nDigite o valor: ";
            cin >> value;
            pilha.push(value);
            break;
         case 2:
            cout << "\nElemento " << pilha.top() << " removido!" << endl;
            pilha.pop();
            break;
         case 3:
            cout << "\nTamanho: " << pilha.size() << endl;
            break;
         case 4:
            cout << "\nTopo da pilha: " << pilha.top() << endl;
            break;
         case 5:
            cout << "\nSaindo..." << endl;
            break;
         default:
            cout << "\nValor incorreto! Digite novamente." << endl;
            break;
      }
   }

   cout << "\nPrograma finalizado!\n" << endl;

   return 0;
}