#include <iostream>
#include <math.h>
#include "triangulo.h"

using namespace std;

// Construtor e verificação:
Triangulo::Triangulo(int a, int b, int c) {
	if(((a * a) == (b * b + c * c)) || ((b * b) == (a * a + c * c)) || ((c * c) == (a * a + b * b)) ){
		A = a;
		B = b;
		C = c;		
	} else {
		cout << "Não é triangulo!\n Valor padrão A=5, B=4 , C=3" << endl;
		A = 5;
		B = 4;
		C = 3;
	}	
}

// Função para testar as possibilidades:
void Triangulo::allPossibilities() {

	for(int i = 1; i <= 200; i++) {
		for(int j = 1; j <= 200; j++) {
			for(int k = 1; k <= 200; k++) {
			
				if(i == sqrt(j * j + k * k)) {
					cout << i << " " << j << " " << k << endl;
				}			
					
			}		
		}
	}
}