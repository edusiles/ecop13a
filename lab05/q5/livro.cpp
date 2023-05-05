#include <iostream>
#include "livro.h"

using namespace std;

Livro::Livro(const string& titulo, const string& autor, const string& editora, int ano) : titulo(titulo), autor(autor), editora(editora), ano(ano), disponivel(true) {}

string Livro::getTitulo() const {
   return titulo;
}

string Livro::getAutor() const {
   return autor;
}

string Livro::getEditora() const {
   return editora;
}

int Livro::getAno() const {
   return ano;
}

bool Livro::estaDisponivel() const {
   return disponivel;
}

void Livro::setDisponibilidade(bool disponivel) {
   disponivel = disponivel;
}