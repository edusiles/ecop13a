#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
   stack<int> pilha;
   queue<int> fila;

   for (int i = 0; i < 5; i++) {
      pilha.push(i);
      fila.push(i);
   }

   cout << "Pilha: ";
   while (!pilha.empty()) {
      cout << pilha.top() << " ";
      pilha.pop();
   }
   cout << endl;

   cout << "Fila: ";
   while (!fila.empty()) {
      cout << fila.front() << " ";
      fila.pop();
   }
   cout << endl;

   return 0;
}