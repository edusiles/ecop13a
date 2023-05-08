#ifndef PRESIDENTE_H
#define PRESIDENTE_H

#include "politico.h"

class Presidente : public Politico {
   private:
      string pais; // País

   public:
      // Construtores:
      Presidente(string n, string p, string pa) : Politico{n, p}, pais{pa} {
         cout << "\nConstrutor Presidente!\n";
      }

      // Destrutores:
      ~Presidente() {
         cout << "\nDestrutor Presidente!\n";
      }

      // Setters:
      void setPais(string p) {pais = p;}

      // Getters:
      string getPais() {return pais;}

      // Others:
      void imprime() {
         Politico::imprime();
         cout << "\nPais: " << this->getPais();
      }
};

#endif