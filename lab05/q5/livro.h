#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>

using namespace std;

class Livro {
   private:
      string titulo, autor, editora;
      int ano;
      bool disponivel;

   public:
      // Construtor:
      Livro(const string&, const string&, const string&, int);

      // Destrutor:
      ~Livro() { }

      // Getters
      string getTitulo() const;
      string getAutor() const;
      string getEditora() const;
      int getAno() const;

      // Métodos:
      bool estaDisponivel() const;
      void setDisponibilidade(bool disponivel);
};

/*

   Para adaptar essa classe para representar um livro em uma livraria, algumas alterações seriam necessárias. Em uma livraria, não faz sentido ter um atributo de disponibilidade, já que todos os livros estão disponíveis para compra. Além disso, pode ser interessante adicionar um preço ao livro.

*/

#endif