#include <iostream>
#include <cmath>
#include "complexo.h"

using namespace std;

// Inicialização do contador:
int Complexo::n = 0;

// Função somar
Complexo Complexo::somar(Complexo _complexo) {
	Complexo temp(getReal() + _complexo.getReal(), getImaginario() + _complexo.getImaginario());

	return temp;
}

// Função subtrair
Complexo Complexo::subtrair(Complexo _complexo) {
	Complexo temp(getReal() - _complexo.getReal(), getImaginario() - _complexo.getImaginario());
	
	cout << "\n" << getObjetos() << "\n";

	return temp;
}

// Função multiplicar
Complexo Complexo::multiplicar(Complexo _complexo) {
	Complexo temp(getReal()*_complexo.getReal() - getImaginario()*_complexo.getImaginario(), getReal()*_complexo.getImaginario() + getImaginario()*_complexo.getReal());

	return temp;
}

// Função dividir
Complexo Complexo::dividir(Complexo _complexo) {
	double x = (getReal()*_complexo.getReal() + getImaginario()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	double y = (_complexo.getReal()*getImaginario() - getReal()*_complexo.getImaginario()) / (pow(_complexo.getReal(), 2) + pow(_complexo.getImaginario(), 2));
	Complexo temp(x, y);

	return temp;
}

// Função modulo
double Complexo::modulo() {
	return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}

// Função print
void Complexo::imprimir() {
	cout << getReal() << " ";

	if(getImaginario() < 0)
		cout << getImaginario() << "i" << endl;
	else
		cout << "+" << getImaginario() << "i" << endl;
}