#include <iostream>
#include "date.h"

using namespace std;

int Date::howmany = 0;

Date::Date() {
   day = 1;
   month = 1;
   year = 1;
   howmany++;
}

Date::Date(int dd, int mm, int yy) : day{dd}, month{mm}, year{yy} {
   count = 0;
   howmany++;
}

Date::~Date() {
   howmany--;
}

// Funções que retornam referências a objetos da classe Date
Date& Date::setDay(int d) {
   if(d > 0 && d < 32)
      day = d;
   else
      cout << "Wrong number for date!\n";

   return *this;
}

Date& Date::setMonth(int m) { 
   if(m > 0 && m < 13)
      month = m;
   else
      cout << "Wrong number for month!\n";
  
   return *this;
}

Date& Date::setYear(int y) {
   if(y > 0)
      year = y;
   else
      cout << "Wrong number for year!\n";
  
   return *this;
}

void Date::print() const {
   cout << day << "/" << month << "/" << year;

   count++;
}