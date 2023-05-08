#include <iostream>
#include "pessoa.h"
#include "aluno.h"
#include "professor.h"

using namespace std;

int main() {
   Pessoa p1 {"Eduardo", "Itajuba-MG"};
   cout << "\nPessoa apenas: \n";
   p1.imprime();

   Aluno a1 {"Pedro", "Campinas-SP", "ECO", 12345};
   cout << "\nAluno: \n";
   a1.imprime();

   Professor pr1 {"Jose", "Sao Paulo-SP", 678910, 3, "ICA"};
   cout << "\nProfessor: \n";
   pr1.imprime();

   Pessoa p2 = pr1;
   cout << "\nOutra pessoa: " << endl;
   p2.imprime();

   return 0;
} 