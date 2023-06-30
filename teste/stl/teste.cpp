#include <iostream>
#include <queue>

using namespace std;

int main() {
   priority_queue<float> prioridades;

   prioridades.push(1.7);
   prioridades.push(80.0);
   prioridades.push(65.0);
   prioridades.push(74.0);
   prioridades.push(28.9);
   prioridades.push(15.5);

   cout << "Removendo em ordem de prioridade: " << endl;
   while(!prioridades.empty()) {
      cout << prioridades.top() << " ";
      prioridades.pop();
   }

   return 0;
}