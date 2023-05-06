#ifndef CCOMPLEXO_H
#define CCOMPLEXO_H

#include <iostream>

using namespace std;

class CComplexo {
   private:
      double real, imaginary;

   public:
      // Construtor:
      // CComplexo(double = 0, double = 0); // Padrão 0.0 e 0.0
      CComplexo(double r, double i) : real{r}, imaginary{i} { }

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
      friend CComplexo operator+(CComplexo& c1, CComplexo& c2);

      CComplexo operator-(CComplexo& c) { // Subtração
         double x = this->real - c.getReal(); // Subtrai parte real do obj. que chamou a função e do passado como parâmetro
         double y = this->imaginary - c.getImaginary(); // Subtrai parte imaginária do obj. que chamou a função e do passado como parâmetro

         return CComplexo {x, y};
      }

      friend void print(const CComplexo&);
};

#endif

CComplexo operator+(CComplexo& c1, CComplexo& c2) { // Soma
   double x = c1.real + c2.real; // Soma parte real do obj. que chamou a função e do passado como parâmetro
   double y = c1.imaginary + c2.imaginary; // Soma parte imaginária do obj. que chamou a função e do passado como parâmetro

   return CComplexo {x, y};
}

// Outros:
void print(const CComplexo& c) { // Impressão
   cout << c.real << " + (" << c.imaginary << ")i ";
}

// Programa principal:
int main() {
   CComplexo a{10, 0};
   CComplexo b{10, 15};

   a = a + b; // Notação direta e simples
   // a = a.operator+(b); // Notação explícita funcional
   b = b - a; // Como em representação aritmética comum

   cout << "Numeros criados: \n";
   print(a);
   cout << endl;
   print(b);

   return 0;
}