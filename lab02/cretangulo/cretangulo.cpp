#include <iostream>
#include <cretangulo.h>

using namespace std;

// Construtores:
CRetangulo::CRetangulo() { // Inicializa com valores padrão
   length=1;
   width=1;

   cout << endl << "Objeto padrão criado!" << endl;
}  

// Funções de configuração:
void CRetangulo::setLength(int l) { // Setar comprimento
   if (l >= 1 && l <=20)
      length = l;
   else length = 1;
}

void CRetangulo::setWidth(int w) { // Setar largura
   if (w>=1 && w<=20)
      width = w;
   else width = 1;
}

// Função para configurar comprimento e largura
CRetangulo::CRetangulo(int l, int w) { // Inicializa com valores enviados pelo usuário
   setLength(l);
   setWidth(w);
   
   cout << endl << "Objeto personalizado criado!" << endl;
}

// Cálculo da área do retângulo:
int CRetangulo::calcArea() {
   return length * width;
}

// Cálculo do perímetro do retângulo:
int CRetangulo::calcPerimeter() {
   return 2 * (length + width);
}

// Imprimir retangulo:
void CRetangulo::printRectangle(int option, char border, char fill) {
   for (int i=0; i<length; i++) {
      for (int j=0; j<width; j++) {
         // Exibir bordas:
         if ((i==0) || (i==length-1) || (j==0) || (j==width-1))
            cout << border;

         // Exibir preencimento se o usuário desejar
         if (option==1)
            cout << fill;

         cout << " ";
      }
      cout << endl;
   }
}

// Verificar se retangulo é um quadrado:
bool CRetangulo::isSquare() {
   return (length == width);
}

void CRetangulo::leitura() {
   int l, w;

   cout << "Digite o comprimento: ";
   cin >> l;

   cout << "Digite a largura: ";
   cin >> w;

   while (!validLength()) {
      cout << "Digite novamente um comprimento: ";
      cin >> l;
   }

   while (!validWidth()) {
      cout << "Digite novamente uma largura: ";
      cin >> w;
   }

   setLength(l);
   setWidth(w);
}

// Função para testar comprimento
bool CRetangulo::validLength() {
   // Validar valor recebido entre 0 e 20
   return (length >= 0 && length <= 20);
}

// Função para testar largura
bool CRetangulo::validWidth() {
   // Validar valor recebido entre 0 e 20
   return (width >= 0 && width <= 20);
}

void CRetangulo::rectangleDimensions() {
   cout << endl << "Largura: " << width << endl << " Comprimento: " << length;
}

// Destrutor:
CRetangulo::~CRetangulo() {
   cout << endl << " Destruindo retângulo..." << endl;
}