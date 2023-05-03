#ifndef CRETANGULO_H
#define CRETANGULO_H

// Classe para tratar atributos de um retangulo:
class Retangulo {
   private:
      int comprimento, largura;
   public:
      Retangulo(); // Construtor padrão
      Retangulo(int = 1, int = 1); // Construtor com parâmetros passados
      ~Retangulo() {} // Destrutor

      // Funções:
      bool valid_comprimento(); // Verificar comprimento
      bool valid_largura(); // Verificar largura
      int area();
      int perimetro();
      void imprimir(int op, char b, char p);
      bool quadrado();
};

#endif