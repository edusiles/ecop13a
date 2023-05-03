#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
	private:
		double real, imaginary;
		static int n; // Contador de instâncias

	public:
		// Construtores:
		Complexo() {
			real = 1;
			imaginary = 1;
			n++;
		}

		Complexo(double x, double y) {
			real = x;
			imaginary = y;
			n++;
		}

		Complexo(const Complexo& z) {
			real = z.real;
			imaginary = z.imaginary;
			n++;
		}

		// Destrutor:
		~Complexo() {
			n--;
		}

		// Funções de cálculo:
		Complexo somar(Complexo);
		Complexo subtrair(Complexo);
		Complexo multiplicar(Complexo);
		Complexo dividir(Complexo);

		// Funções auxiliares:
		void setReal(double a) {
			real = a;
		}

		void setImaginario(double a) {
			imaginary = a;
		}

		double getReal() {
			return real;
		}

		double getImaginario() {
			return imaginary;
		}

		int getObjetos() {
			return n;
		}

		double modulo();
		void imprimir();
};

#endif