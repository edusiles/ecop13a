#include <iostream>

using namespace std;

void printInt(int n, int base) {
   char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
   
   if(n >= base) 
      printInt(n / base, base); // Chamada recursiva da função
   
   cout << Array[n % base]; // Resultado na saída é 64
   // Uma vez que 6 * 16^1 = 96 e 4 * 16^0 = 4
   // Somando ambos temos o número 100 na base Hexadecimal.
}

int main(void) {
   int n = 100; // Número 100 (Base decimal)
   int base = 16; // Base Hexadecimal
   printInt(n, base);
}