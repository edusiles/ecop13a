#include <iostream>
#include <set>

using namespace std;

int main() {
   set<int> arvore;
   set<int>::iterator it;

   arvore.insert(30);
   arvore.insert(20);
   arvore.insert(10);
   arvore.insert(10);
   arvore.insert(40);
   arvore.insert(50);
   arvore.erase(20);

   cout << "Quantidade de elementos: " << arvore.size() << endl;
   cout << "Elementos: ";

   for(it = arvore.begin(); it != arvore.end(); ++it)
      cout << *it << " ";
   
   cout << endl;

   return 0;
}