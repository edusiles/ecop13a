#include <iostream>

using namespace std;

int quociente(int n, int m) {
   return n/m;
}

int main() {
   int x=0, y=0;

   cout << "Entre com os valores de x e y: ";
   cin >> x >> y;

   cout << "Resultado: " << quociente(x, y) << endl;

   cout << "Programa finalizado!" << endl;

   return 0;
}