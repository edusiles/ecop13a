#include <iostream>
#include "bigint.h"

using namespace std;

int main() {
	BigInt x, b, aux;
	
	cout << "Programa para calcular inteiros\n" << "Digite o valor de X: ";
	x.read();

	cout << endl << "Digite o valor de Y: ";
	b.read();

	cout << "X + Y = ";
	aux = x.sum(b);

	aux.print();
	
	cout << "X - Y = ";
	aux = x.subtract(b);
	
	aux.print();

	return 0;
}