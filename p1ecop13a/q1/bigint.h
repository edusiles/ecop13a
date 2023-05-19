#ifndef BigInt_H
#define BigInt_H

#include <iostream>
#include <string>

using namespace std;

class BigInt {
   private:
      static const int TAMANHO = 30;
      int digitos[TAMANHO];

   public:
      BigInt(): digitos{} { }

      BigInt(string numero);

      // Sobrecarga de operadores:

      friend ostream& operator<<(ostream& out, const BigInt& n);
      friend istream& operator>>(istream& in, BigInt& n);

      // Operadores relacionais:
      bool operator==(const BigInt&) const;
      bool operator!=(const BigInt&) const;
      bool operator<(const BigInt&) const;
      bool operator>(const BigInt&) const;
      bool operator<=(const BigInt&) const;
      bool operator>=(const BigInt&) const;

      // Operadores aritmeticos:
      BigInt operator+(const BigInt&) const;
      BigInt operator-(const BigInt&) const;
      BigInt operator*(const BigInt&) const;
      BigInt operator/(const BigInt&) const;

      BigInt operator+=(BigInt&);
      BigInt operator-=(BigInt&);

      friend ostream& operator<<(ostream&, const BigInt&);
      friend istream& operator>>(istream&, BigInt&);

      // Verificar se é palíndromo:
      bool palindromo();
};

#endif