#include <iostream>
#include <string>
#include "bigint.h"

using namespace std;

int main() {
   BigInt n1("123456789012345678901234567890");
   BigInt n2("987654321098765432109876543210");

   cout << "n1 = " << n1 << endl;
   cout << "n2 = " << n2 << endl;

   cout << "n1 + n2 = " << n1 + n2 << endl;
   cout << "n1 - n2 = " << n1 - n2 << endl;
   cout << "n1 * n2 = " << n1 * n2 << endl;
   cout << "n1 / n2 = " << n1 / n2 << endl;

   if (n1 == n2) {
      cout << "n1 == n2" << endl;
   } else {
      cout << "n1 != n2" << endl;
   }

   if (n1 != n2) {
      cout << "n1 != n2" << endl;
   } else {
      cout << "n1 == n2" << endl;
   }

   if (n1 < n2) {
      cout << "n1 < n2" << endl;
   } else {
      cout << "n1 >= n2" << endl;
   }

   if (n1 > n2) {
      cout << "n1 > n2" << endl;
   } else {
      cout << "n1 <= n2" << endl;
   }

   if (n1 <= n2) {
      cout << "n1 <= n2" << endl;
   } else {
      cout << "n1 > n2" << endl;
   }

   if (n1 >= n2) {
      cout << "n1 >= n2" << endl;
   } else {
      cout << "n1 < n2" << endl;
   }

   cout << "Digite um número inteiro longo com até 30 dígitos: ";

   BigInt n3;
   cin >> n3;
   cout << "n3 = " << n3 << endl;

   return 0;
}