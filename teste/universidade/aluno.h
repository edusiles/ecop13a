#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : public Pessoa { // Herança pública de pessoa
   private:
      string curso;
      int matricula;

   public:
      Aluno(string, string, string, int);
      ~Aluno() { }

      void setCurso(string);
      void imprime();
};

#endif