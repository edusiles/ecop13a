#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

int main() {
	Complexo x(1,2);
	Complexo y(3,4);
	Complexo aux;

	cout << "X: ";
	x.imprimir();
	
	cout << "Y: ";
	y.imprimir();
	
	cout << "X + Y: ";
	aux = x.somar(y);
	aux.imprimir();

	cout << "X - Y: ";
	aux = x.subtrair(y);
	aux.imprimir();

	cout << "X * Y: ";
	aux = x.multiplicar(y);
	aux.imprimir();

	cout << "X / Y: ";
	aux = x.dividir(y);
	aux.imprimir();

	cout << "|X|: " << x.modulo() << endl;
	cout << "|Y|: " << x.modulo() << endl;

	cout << "Qt de objetos: " << x.getObjetos() << endl;
}
