#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
   private:
      float real, imaginary;

   public:
      // Construtor:
      Complexo(float = 0.0, float = 0.0); // Padrão 0.0 e 0.0

      // Destrutor:
      ~Complexo() { }

      // Setters:
      void setReal(float);
      void setImaginary(float);

      // Getters:
      float getReal();
      float getImaginary();

      // Outros:
      void print(); // Impressão

      // Sobrecarga de operadores:
      Complexo add(Complexo&); // Soma
      Complexo sub(Complexo&); // Subtração
};

#endif 