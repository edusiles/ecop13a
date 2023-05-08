#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e} { }

void Pessoa::setEndereco(string e) {
   endereco = e;
}

void Pessoa::imprime() {
   cout << "Nome: " << nome << "\n";
   cout << "Endereco: " << endereco << "\n";
} 