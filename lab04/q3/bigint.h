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
      BigInt(): digitos{} {}

      BigInt(string numero);

      friend ostream& operator<<(ostream& os, const BigInt& n);
      friend istream& operator>>(istream& is, BigInt& n);

      bool operator==(const BigInt& n) const;
      bool operator!=(const BigInt& n) const;
      bool operator<(const BigInt& n) const;
      bool operator>(const BigInt& n) const;
      bool operator<=(const BigInt& n) const;
      bool operator>=(const BigInt& n) const;

      BigInt operator+(const BigInt& n) const;
      BigInt operator-(const BigInt& n) const;
      BigInt operator*(const BigInt& n) const;
      BigInt operator/(const BigInt& n) const;

      friend ostream& BigInt::operator<<(ostream& os, const BigInt& n);
      friend istream& BigInt::operator>>(istream& is, BigInt& n);
};

#endif