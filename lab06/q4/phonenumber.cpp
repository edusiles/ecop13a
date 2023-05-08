#include <iomanip>
#include "phonenumber.h"

using namespace std;

ostream &operator<<(ostream &output, const Phonenumber &number) {
   output << "+" << number.dialingCode << " (" << number.DDD << ") " << number.linha;

   return output;
}  

istream &operator>>(istream &input, Phonenumber &number) {
   input >> number.dialingCode >> number.DDD >> number.linha;

   return input;
}