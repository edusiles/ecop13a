#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data {
   private:
      int dia, mes, ano;

   public:
      // Construtores:
      Data();
      Data(int d, int m, int a);

      // Métodos:
      friend ostream& operator<< (ostream& os, const Data& data);
      friend istream& operator>> (istream& is, Data& data);

      Data& operator++();
      Data operator++(int);

      int dias_no_mes() const;    
};


#endif