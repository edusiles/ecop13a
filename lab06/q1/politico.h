#ifndef POLITICO_H
#define POLITICO_H

#include <iostream>
#include <string>

using namespace std;

class Politico {
   protected:
      string nome, partido;

   public:
      // Construtores:
      Politico(string n, string p) : nome{n}, partido{p} {
         cout << "\nConstrutor Politico!\n";
      }

      // Destrutores:
      ~Politico() {
         cout << "\nDestrutor Politico!\n\n";
      }

      // Setters:
      void setNome(string n) {nome = n;}
      void setPartido(string p) {partido = p;}

      // Getters:
      string getNome() {return nome;}
      string getPartido() {return partido;}

      // Others:
      void imprime() {
         cout << "Nome: " << this->getNome();
         cout << "\nPartido: " << this->getPartido();
      }
};

#endif