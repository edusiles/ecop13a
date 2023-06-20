#include <iostream>
#include <list>

using namespace std;

void menu() {
   cout << " 1. Inserir elemento na frente\n";
   cout << " 2. Inserir elemento no final\n";
   cout << " 3. Excluir elemento na frente\n";
   cout << " 4. Excluir elemento no final\n";
   cout << " 5. Exibir primeiro elemento da lista\n";
   cout << " 6. Exibir ultimo elemento da lista\n";
   cout << " 7. Tamanho da lista\n";
   cout << " 8. Redimensionar lista\n";
   cout << " 9. Remover elementos com valores especificos\n";
   cout << "10. Remover valores duplicados\n";
   cout << "11. Reverter a ordem dos elementos\n";
   cout << "12. Ordenar a lista\n";
   cout << "13. Sair\n";
   cout << "\nEscolha uma opcao [1 ~ 13]: ";
}

int main() {
   list<int> lista;
   int op = 0, n, x;
   
   cout << "\n=================================\n";
   cout << "| Implementacao de Lista no STL |\n";
   cout << "=================================" << endl;

   while(op != 13){

      cout << endl;
      menu();
      cin >> op;

      switch(op) {
         case 1:
            cout << "\nEntre com o valor que deseja inserir: ";
            cin >> n;
            lista.push_front(n);
            break;
         case 2:
            cout << "\nEntre com o valor que deseja inserir: ";
            cin >> n;
            lista.push_back(n);
            break;
         case 3:
            cout << "\nElemento " << lista.front() << " removido!" << endl;
            lista.pop_front();
            break;
         case 4:
            cout << "\nElemento " << lista.back() << " removido!" << endl;
            lista.pop_back();
            break;
         case 5:
            cout << "\nPrimeiro elemento: " << lista.front() << endl;
            lista.front();
            break;
         case 6:
            cout << "\nUltimo elemento: " << lista.back() << endl;
            lista.back();
            break;
         case 7:
            cout << "\nTamanho da lista: " << lista.size() << endl;
            break;
         case 8:
            cout << "\nDigite o tamanho que deseja redimencionar: ";
            cin >> n;

            if (n > lista.size()) {
               cout << "\nDigite com quais valores deseja completar a lista: ";
               cin >> x;

               lista.resize(n, x);
            } else {
               cout << "\nOs elementos fora do tamanho foram excluidos!" << endl;
               lista.resize(n);
            }

            cout << "\nLista redimencionada!" << endl;
            break;
         case 9:
            cout << "\nEntre com o valor que deseja remover: ";
            cin >> n;

            lista.remove(n);

            cout << "\nValores removidos!" << endl;
            break;
         case 10:
            lista.unique();
            cout << "\nValores duplicados removidos!" << endl;
            break;
         case 11:
            lista.reverse();
            cout << "\nOrdem dos elementos revertida!" << endl;
            break;
         case 12:
            lista.sort();
            cout << "\nElementos ordenados!" << endl;
            break;
         case 13:
            cout << "\nSaindo..." << endl;
            break;
         default:
            cout << "\nOpcao incorreta!\nTente novamente..." << endl;
            break;
      }
   }

   cout << "\nFim do programa!\n" << endl;

   return 0;
}