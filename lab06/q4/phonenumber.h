#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

using namespace std;
 
class Phonenumber {
   private:
      string dialingCode; // +55
      string DDD; // DDD
      string linha; // XXXXX-XXXX
   public:
      friend ostream &operator<<(ostream &, const Phonenumber &);
      friend istream &operator>>(istream &, Phonenumber &);
};

#endif