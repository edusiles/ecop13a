#ifndef CRETANGULO_H
#define CRETANGULO_H

// Classe para tratar atributos de um retangulo:
class CRetangulo {
   private: // Atributos privativos
      int length, width;
   public:
      // Funções Padrão:
      CRetangulo(); // Construtor padrão
      CRetangulo(int, int); // Construtor com parâmetros passados
      ~CRetangulo(); // Destrutor

      // Funções de configuração:
      void setLength(int l); // Setar comprimento
      void setWidth(int w); // Setar largura
      void leitura();

      // Funções de verificação
      bool validLength(); // Verificar comprimento
      bool validWidth(); // Verificar largura
      bool isSquare(); // Verificar se é quadrado

      // Funções de cálculo:
      int calcArea(); // Calcular área
      int calcPerimeter(); // Calcular perímetro

      // Funções de exibição:
      void printRectangle(int op, char b, char p);
      void rectangleDimensions();
};

#endif