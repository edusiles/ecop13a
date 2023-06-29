#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
   map<int, string> arvore;
   map<int, string>::iterator it;

   pair<int, string> par{9876, "Maria"};

   arvore.insert(make_pair(1234, "Joao"));
   arvore.insert(pair<int, string>{5678, "Carlos"});
   arvore.insert(par);
   arvore.insert(make_pair(1234, "Karina"));
   arvore.insert(make_pair(23456, "Adriana"));
   arvore.erase(5678);

   cout << "Quantidade de elementos: " << arvore.size() << endl;
   cout << "Elementos: " << endl;

   for(it = arvore.begin(); it != arvore.end(); ++it)
      cout << it->first << " - " << it->second << endl;
   
   cout << endl;

   return 0;
}