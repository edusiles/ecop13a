#include <cfracao.h>
#include <iostream>

using namespace std;

// Métodos privativos:
CFracao CFracao::Reduzida(void) {
   int gcd = 1, minimo = m_numerador;

   if (m_numerador > m_denominador) 
      minimo = m_denominador;
   
   for (int i = 1; i <= minimo; i++) {
      if ((m_numerador%i == 0) && (m_denominador%i == 0))
         gcd = i;
   }

   m_numerador /= gcd;
   m_numerador /= gcd;

   return (*this);
}

// Métodos Aritméticos
// Soma:
CFracao CFracao::somar(CFracao _Fracao) {
   CFracao temp((m_numerador * _Fracao.m_denominador) + (m_denominador * _Fracao.m_numerador), m_denominador * _Fracao.m_denominador);

   return temp.Reduzida();
}

// Subtração:
CFracao CFracao::subtrair(CFracao _Fracao) {
   CFracao temp((m_numerador * _Fracao.m_denominador) - (m_denominador * _Fracao.m_numerador), m_denominador * _Fracao.m_denominador);

   return temp.Reduzida();
}

// Multiplicar:
CFracao CFracao::multiplicar(CFracao _Fracao) {
   CFracao temp(m_numerador * _Fracao.m_numerador, m_denominador * _Fracao.m_denominador);

   return temp.Reduzida();
}

// Dividir:
CFracao CFracao::dividir(CFracao _Fracao) {
   CFracao temp(m_numerador * _Fracao.m_denominador, m_denominador * _Fracao.m_numerador);

   return temp.Reduzida();
}

// Métodos de comparação:
// Verdadeiro se menor que:
int CFracao::menorQue(CFracao _Fracao) {
   return (m_numerador * _Fracao.m_denominador < m_denominador * _Fracao.m_numerador );
}

// Verdadeiro se maior que:
int CFracao::maiorQue(CFracao _Fracao) {
   return (m_numerador * _Fracao.m_denominador > m_denominador * _Fracao.m_numerador );
}

// Verdadeiro se igual:
int CFracao::igual(CFracao _Fracao) {
   return (m_numerador * _Fracao.m_denominador == m_denominador * _Fracao.m_numerador );
}

// Método de conversão:
// Retorna como float:
float CFracao::comoFloat(void) {
   return ((float)m_numerador / (float)m_denominador);
}

// Método de impressão:
// Mostra no formato (numerador/denominador):
void CFracao::printFracao(void) {
   cout << m_numerador << "/" << m_denominador;
}