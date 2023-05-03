#ifndef BIGINT_H
#define BIGINT_H

class BigInt {
	private:
		int number[31];
		int length;

	public:
		// Construtor:
		BigInt() {
			for(int i = 0; i < 31; i++)
				number[i] = 0;
		}

		// Destrutor
		~BigInt() { };

		// Funções:
		void read();
		void print();
		BigInt sum(BigInt);
		BigInt subtract(BigInt);

};

#endif