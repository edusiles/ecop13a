#include <iostream>
#include <string>
#include "bigint.h"

using namespace std;

BigInt::BigInt(string numero) {
   int tamanhoNumero = numero.size();
   for (int i = 0; i < TAMANHO; i++) {
         digitos[i] = i < TAMANHO - tamanhoNumero ? 0 : numero[i - (TAMANHO - tamanhoNumero)] - '0';
   }
}

ostream& operator<<(ostream& os, const BigInt& n) {
   int i = 0;

   while (i < n.TAMANHO - 1 && n.digitos[i] == 0) {
         i++;
   }

   while (i < n.TAMANHO) {
         os << n.digitos[i++];
   }

   return os;
}

istream& operator>>(istream& is, BigInt& n) {
   string entrada;

   is >> entrada;
   n = BigInt(entrada);

   return is;
}

bool BigInt::operator==(const BigInt& n) const {
   for (int i = 0; i < TAMANHO; i++) {
         if (digitos[i] != n.digitos[i]) {
            return false;
         }
   }
   return true;
}

bool BigInt::operator!=(const BigInt& n) const {
   return !(*this == n);
}

bool BigInt::operator<(const BigInt& n) const {
   for (int i = 0; i < TAMANHO; i++) {
         if (digitos[i] < n.digitos[i]) {
            return true;
         } else if (digitos[i] > n.digitos[i]) {
            return false;
         }
   }
   return false;
}

bool BigInt::operator>(const BigInt& n) const {
   for (int i = 0; i < TAMANHO; i++) {
         if (digitos[i] > n.digitos[i]) {
            return true;
         } else if (digitos[i] < n.digitos[i]) {
            return false;
         }
   }
   return false;
}

bool BigInt::operator<=(const BigInt& n) const {
   return (*this < n) || (*this == n);
}

bool BigInt::operator>=(const BigInt& n) const {
   return (*this > n) || (*this == n);
}

BigInt BigInt::operator+(const BigInt& n) const {
   BigInt resultado;
   int vaium = 0;

   for (int i = TAMANHO - 1; i >= 0; i--) {
         int soma = digitos[i] + n.digitos[i] + vaium;
         resultado.digitos[i] = soma % 10;
         vaium = soma / 10;
   }

   return resultado;
}

BigInt BigInt::operator-(const BigInt& n) const {
   BigInt resultado;
   int emprestimo = 0;
   for (int i = TAMANHO - 1; i >= 0; i--) {
      int diferenca = digitos[i] - n.digitos[i] - emprestimo;
      if (diferenca < 0) {
            diferenca += 10;
            emprestimo = 1;
      } else {
            emprestimo = 0;
      }
      resultado.digitos[i] = diferenca;
   }
   return resultado;
}

BigInt BigInt::operator*(const BigInt& n) const {
   BigInt resultado;
   int carry = 0;
   for (int i = TAMANHO - 1; i >= 0; i--) {
      int produto = digitos[i] * n.digitos[i] + carry;
      resultado.digitos[i] = produto % 10;
      carry = produto / 10;
   }
   return resultado;
}

BigInt BigInt::operator/(const BigInt& n) const {
   BigInt resto(*this);
   BigInt resultado;

   for (int i = 0; i < TAMANHO; i++) {
      int contador = 0;

      while (resto >= n) {
            resto = resto - n;
            contador++;
      }

      resultado.digitos[i] = contador;
      resto = resto * BigInt("10");
      resto.digitos[TAMANHO - 1] = 0;
   }

   return resultado;
}

BigInt BigInt::operator+=(BigInt& n) {
   *this = *this + n;

   return *this;
}

BigInt BigInt::operator-=(BigInt& n) {
   *this = *this - n;

   return *this;
}

bool BigInt::palindromo() {
   for (int i = 0; i < TAMANHO / 2; i++) {

      if (digitos[i] != digitos[TAMANHO - i - 1])
         return false;
         
   }

   return true;
}