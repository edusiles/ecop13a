#ifndef PREFEITO_H
#define PREFEITO_H

#include "governador.h"

class Prefeito : public Governador {
   private:
      string cidade;

   public:
      // Construtores:
      Prefeito(string n, string p, string pa, string e, string c) : Governador{n, p, pa, e}, cidade{c} {
         cout << "\nConstrutor Prefeito!\n";
      }

      // Destrutores:
      ~Prefeito() {
         cout << "\nDestrutor Prefeito!\n";
      }

      // Setters:
      void setCidade(string c) {cidade = c;}

      // Getters:
      string getCidade() {return cidade;}

      // Others:
      void imprime() {
         Governador::imprime();
         cout << "\nCidade: " << cidade;
      }
};

#endif