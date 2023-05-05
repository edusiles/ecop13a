#ifndef CFRACAO_H
#define CFRACAO_H

#include <iostream>

using namespace std;
class CFracao {
    private:
        int m_numerador;
        int m_denominador;
        CFracao Reduzida(void);

    public:
        CFracao(int num, int den);
        CFracao();
        CFracao(const CFracao &f);

        // Sobrecarga de operadores aritméticos
        CFracao operator+(CFracao f);
        CFracao operator-(CFracao f);
        CFracao operator*(CFracao f);
        CFracao operator/(CFracao f);

        // Sobrecarga de operadores de comparação
        bool operator<(CFracao f);
        bool operator<=(CFracao f);
        bool operator>(CFracao f);
        bool operator>=(CFracao f);
        bool operator==(CFracao f);
        bool operator!=(CFracao f);

        // Sobrecarga de operadores de entrada e saída
        friend ostream& operator<<(ostream& os, CFracao& f);
        friend istream& operator>>(istream& is, CFracao& f);

        // Método de impressão
        void printFracao(void);
};

#endif