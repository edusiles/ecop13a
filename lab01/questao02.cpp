#include <iostream>
#include <cmath>

using namespace std;

bool primos(int num) {

      if (num == 2)
         return true;
      if (num%2 == 0)
         return false;

      for (int i=3; i<=sqrt(num)+1; i++) {
         if (num%i == 0) 
            return false;
      }

      return true;
}

int main(void) {
   int count {0}, i {2};

   cout << "Esses são os 20 primeiros números primos:\n\n";
   while (count < 20) {
      if (primos(i)) {
         cout << i << " ";
         count++;
      } i++;
   }
   cout << endl;
}