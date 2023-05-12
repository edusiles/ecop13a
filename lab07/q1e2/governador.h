#ifndef GOVERNADOR_H
#define GOVERNADOR_H

#include "presidente.h"

class Governador : public Presidente {
   protected:
      string estado;

   public:
      // Construtores:
      Governador(string n, string p, string pa, string e) : Presidente{n, p, pa}, estado{e} {
         // cout << "\nConstrutor Governador!\n";
      }

      // Destrutores:
      ~Governador() {
         cout << "\nDestrutor Governador!\n";
      }

      // Setters:
      void setEstado(string e) {estado = e;}

      // Getters:
      string getEstado() {return estado;}

      // Others:
      virtual void imprime() {
         Presidente::imprime();
         cout << "\nEstado: " << estado;
      }
};

#endif