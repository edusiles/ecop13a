#include <iostream>
#include <iomanip>
#include "data.h"

// Construtores:
Data::Data() {
   dia = 1;
   mes = 1;
   ano = 2021;
}

Data::Data(int d, int m, int a) {
   dia = d;
   mes = m;
   ano = a;
}

ostream& operator<< (ostream& os, const Data& data);
istream& operator>> (istream& is, Data& data);

Data& Data::operator++() { // incremento pré-fixado
   dia++;

   if (dia > dias_no_mes()) {
         dia = 1;
         mes++;
         if (mes > 12) {
            mes = 1;
            ano++;
         }
   }

   return *this;
}

Data Data::operator++(int) { // incremento pos-fixado
   Data temp = *this;

   ++(*this);

   return temp;
}

int Data::dias_no_mes() const {
   if (mes == 2) {
      if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
         return 29;
      else
         return 28;
   }
   else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      return 30;
   else
      return 31;
}

ostream& operator<< (ostream& os, const Data& data) {
   os << setw(2) << setfill('0') << data.dia << " de ";

   switch (data.mes) {
      case 1: os << "janeiro"; break;
      case 2: os << "fevereiro"; break;
      case 3: os << "março"; break;
      case 4: os << "abril"; break;
      case 5: os << "maio"; break;
      case 6: os << "junho"; break;
      case 7: os << "julho"; break;
      case 8: os << "agosto"; break;
      case 9: os << "setembro"; break;
      case 10: os << "outubro"; break;
      case 11: os << "novembro"; break;
      case 12: os << "dezembro"; break;
   }
   
   os << " de " << data.ano;

   return os;
}

istream& operator>> (istream& is, Data& data) {
   is >> data.dia >> data.mes >> data.ano;

   return is;
}