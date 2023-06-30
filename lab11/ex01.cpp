/*
   (ex01.cpp) Utilizando a STL, escreva um programa em C++ para a demonstração do
   funcionamento de uma Heap ou Fila de Prioridade, incluída através do cabeçalho <queue>.
   Faça um programa que deve mostrar repetidamente um menu com as opções que podem ser
   escolhidas pelo usuário. Ele deve funcionar de maneira semelhante ao exemplo a seguir:
*/

#include <iostream>
#include <queue>

using namespace std;

int menu() {
   int op;

   cout << "1. Inserir elemento\n";
   cout << "2. Remover elemento\n";
   cout << "3. Tamanho da heap\n";
   cout << "4. Primeiro elemento\n";
   cout << "5. Sair\n";
   cout << "\nEscolha [1 ~ 5]: ";
   cin >> op;

   return op;
}

int main() {
   priority_queue<int> heap;
   int op = 0, value = 0;

   cout << "\n------------------------\n";
   cout << "| Programa de Heap STL |\n";
   cout << "------------------------\n";

   while(op != 5) {
      cout << endl;
      op = menu();

      switch(op) {
         case 1:
            cout << "\nDigite o valor: ";
            cin >> value;
            heap.push(value);
            cout << "\nValor " << value << " inserido!" << endl;
            break;
         case 2:
            if(!heap.empty()) {
               cout << "\nElemento " << heap.top() << " removido!" << endl;
               heap.pop();
            } else {
               cout << "\nHeap vazia!" << endl;
            }
            break;
         case 3:
            cout << "\nTamanho: " << heap.size() << endl;
            break;
         case 4:
            if(!heap.empty()) {
               cout << "\nPrimeiro elemento da heap: " << heap.top() << endl;
            } else {
               cout << "\nHeap vazia!" << endl;
            }
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