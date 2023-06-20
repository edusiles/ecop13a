#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
   list<string> nomes;
   list<string>::iterator it;

   nomes.push_back("John");
   nomes.push_back("Paul");
   nomes.push_front("Mary");

   it = nomes.begin();
   nomes.insert(it, "Joseph");
   ++it;
   ++it;

   nomes.insert(it, "Mary");

   cout << "Lista encadeada de nomes: " << endl;

   for (it = nomes.begin(); it != nomes.end(); it++)
      cout << *it << " ";

   nomes.remove("Mary");

   cout << "\nLista atualizada de nomes: " << endl;

   for (it = nomes.begin(); it != nomes.end(); it++)
      cout << *it << " ";

   return 0;
}