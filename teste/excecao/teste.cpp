#include <iostream>
#include <stdexcept>

using namespace std;

class DividePorZeroException : public runtime_error {
   public:
      DividePorZeroException() : runtime_error("Tentativa de divisao por zero!") { }
};

int quociente(int n, int d) {
   if (d==0) 
      throw DividePorZeroException();

   return n/d;
}

int main() {
   int x=0, y=0;

   cout << "Entre com os valores de x e y: ";
   cin >> x >> y;

   try {
      cout << "Resultado: " << quociente(x, y) << endl;
   } catch (DividePorZeroException &ex) {
      cerr << "\nOcorreu um erro: " << ex.what() << endl;
   }

   cout << "Programa finalizado!" << endl;

   return 0;
}