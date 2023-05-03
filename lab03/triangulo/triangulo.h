#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo {
	private:
		int A, B, C;	
	
	public:	
		// Construtores:	
		Triangulo() {};
		Triangulo(int, int, int);

		// Destrutor:
		~Triangulo() {};
			
		// Verificar Possibilidades
		void allPossibilities();
};

#endif