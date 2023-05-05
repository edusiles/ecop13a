#include "cfracao.h"

using namespace std;

// Construtor com parâmetros
CFracao::CFracao(int num, int den) {
    m_numerador = num;
    if (den != 0)
        m_denominador = den;
    else
        m_denominador = 1;
}

// Construtor padrão
CFracao::CFracao() {
    m_numerador = 0;
    m_denominador = 1;
}

// Construtor de cópia
CFracao::CFracao(const CFracao &f) {
    m_numerador = f.m_numerador;
    m_denominador = f.m_denominador;
}

// Retorna a fração reduzida
CFracao CFracao::Reduzida(void) {
    int gcd = 1, minimo = m_numerador;

    if (m_numerador > m_denominador)
        minimo = m_denominador;

    for (int i = 1; i <= minimo; i++) {
        if ((m_numerador % i == 0) && (m_denominador % i == 0))
            gcd = i;
    }

    m_numerador /= gcd;
    m_denominador /= gcd;

    return (*this);
}

// Sobrecarga do operador de adição
CFracao CFracao::operator+(CFracao f) {
    CFracao temp((m_numerador * f.m_denominador) + (m_denominador * f.m_numerador), m_denominador * f.m_denominador);

    return temp.Reduzida();
}

// Sobrecarga do operador de subtração
CFracao CFracao::operator-(CFracao f) {
    CFracao temp((m_numerador * f.m_denominador) - (m_denominador * f.m_numerador), m_denominador * f.m_denominador);

    return temp.Reduzida();
}

// Sobrecarga do operador de multiplicação
CFracao CFracao::operator*(CFracao f) {
    CFracao temp((m_numerador * f.m_denominador) * (m_denominador * f.m_numerador), m_denominador * f.m_denominador);

    return temp.Reduzida();
}

// Sobrecarga do operador de divisao
CFracao CFracao::operator/(CFracao f) {
    CFracao temp((m_numerador * f.m_denominador) / (m_denominador * f.m_numerador), m_denominador * f.m_denominador);

    return temp.Reduzida();
}

bool CFracao::operator<(CFracao f) {
   return (m_numerador * f.m_denominador) < (m_denominador * f.m_numerador);
}

bool CFracao::operator>(CFracao f) {
   return (m_numerador * f.m_denominador) > (m_denominador * f.m_numerador);
}

bool CFracao::operator<=(CFracao f) {
   return (m_numerador * f.m_denominador) <= (m_denominador * f.m_numerador);
}

bool CFracao::operator>=(CFracao f) {
   return (m_numerador * f.m_denominador) >= (m_denominador * f.m_numerador);
}

bool CFracao::operator==(CFracao f) {
   return (m_numerador * f.m_denominador) == (m_denominador * f.m_numerador);
}

bool CFracao::operator!=(CFracao f) {
   return (m_numerador * f.m_denominador) != (m_denominador * f.m_numerador);
}

// Sobrecarga de operadores
ostream& operator<<(ostream& os, CFracao& f) {
    os << f.m_numerador << "/" << f.m_denominador;
    return os;
}

istream& operator>>(istream& is, CFracao& f) {
    cout << "Entre com o numerador: ";
    is >> f.m_numerador;
    cout << "Entre com o denominador: ";
    is >> f.m_denominador;

    return is;
}