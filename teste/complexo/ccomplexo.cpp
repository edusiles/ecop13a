#ifndef CCOMPLEXO_H
#define CCOMPLEXO_H

#include <iostream>
#include <cmath>

using namespace std;

class CComplexo {
   private:
      double real, imaginary;

   public:
      // Construtor:
      CComplexo(double = 0, double = 0); // Padrão 0.0 e 0.0

      // Destrutor:
      ~CComplexo() { }

      // Setters:
      void setReal(double r) {
         if(r > 0)
            real = r;
         else
            cout << "Incorrect number!";
      }

      void setImaginary(double i) {
         if(i > 0)
            imaginary = i;
         else
            cout << "Incorrect number!";
      }

      // Getters:
      double getReal() {return real;}
      double getImaginary() {return imaginary;}

      // Sobrecarga de operadores:
      operator int();
      friend CComplexo operator+(CComplexo& c1, CComplexo& c2);

      CComplexo operator-(CComplexo& c) { // Subtração
         double x = this->real - c.getReal(); // Subtrai parte real do obj. que chamou a função e do passado como parâmetro
         double y = this->imaginary - c.getImaginary(); // Subtrai parte imaginária do obj. que chamou a função e do passado como parâmetro

         return CComplexo {x, y};
      }

      friend ostream& operator<<(ostream&, const CComplexo&);
      friend istream& operator>>(istream&, CComplexo&);
};

#endif


CComplexo::CComplexo(double r, double i) : real{r}, imaginary{i} { }

CComplexo operator+(CComplexo& c1, CComplexo& c2) { // Soma
   double x = c1.real + c2.real; // Soma parte real do obj. que chamou a função e do passado como parâmetro
   double y = c1.imaginary + c2.imaginary; // Soma parte imaginária do obj. que chamou a função e do passado como parâmetro

   return CComplexo {x, y};
}

// Outros:
/*void print(const CComplexo& c) { // Impressão
   cout << c.real << " + (" << c.imaginary << ")i ";
}*/

ostream& operator<<(ostream& out, const CComplexo& c) {
   out << c.real << " + (" << c.imaginary << ")i ";

   return out;
}

istream& operator>>(istream& in, CComplexo& c) {
   in >> c.real >> c.imaginary;

   return in;
}

CComplexo::operator int() {
   return sqrt(real * real + imaginary * imaginary);
}

// Programa principal:
int main() {
   CComplexo a, b;

   cout << "Entre com o complexo a: ";
   cin >> a;

   cout << "Entre com o complexo b: ";
   cin >> b;

   // a = a + b; // Notação direta e simples
   // a = a.operator+(b); // Notação explícita funcional
   // b = b - a; // Como em representação aritmética comum

   cout << "Numeros criados: \n";
   cout << a << " e " << b << endl;

   cout << "Convertidos para inteiro: \n";
   cout << (int)a << " e " << (int)b << endl;

   return 0;
}