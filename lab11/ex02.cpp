/*
   (ex02.cpp) Utilizando a STL, escreva um programa em C++ para a demonstração do
   funcionamento de uma árvore binária de busca balanceada ou set, incluída através do cabeçalho
   <set>. Faça um programa que deve mostrar repetidamente um menu com as opções que
   podem ser escolhidas pelo usuário. A árvore poderá conter valores repetidos, portanto escolha
   a classe adequada (multiset). Ele deve funcionar de maneira semelhante ao exemplo a seguir:
*/

#include <iostream>
#include <set>

using namespace std;

int menu() {
   int op;

   cout << " 1. Inserir elemento\n";
   cout << " 2. Remover elementos com determinado valor\n";
   cout << " 3. Exibir elementos em ordem\n";
   cout << " 4. Exibir quantidade de elementos\n";
   cout << " 5. Remover todos os elementos\n";
   cout << " 6. Consultar quantidade de elementos com determinado valor\n";
   cout << " 7. Sair\n";
   cout << "\nEscolha uma opcao [1 ~ 7]: ";
   cin >> op;

   return op;
}

int main() {
   multiset<int> arvore;
   int op = 0, n;
   
   cout << "\n========================================\n";
   cout << "| Implementacao de Arvore (set) no STL |\n";
   cout << "========================================" << endl;

   while(op != 7){

      cout << endl;
      op = menu();

      switch(op) {
         case 1:
            cout << "\nEntre com o valor que deseja inserir: ";
            cin >> n;
            arvore.insert(n);
            cout << "\nElemento " << n << " inserido!" << endl;
            break;
         case 2:
            if (!arvore.empty()) {
               cout << "\nEntre com o valor que deseja remover: ";
               cin >> n;
               int count = arvore.erase(n);
               if (count > 0) {
                  cout << "\nElemento " << n << " removido!" << endl;
               } else {
                  cout << "\nElemento não encontrado na arvore!" << endl;
               }
            } else {
               cout << "\nArvore ja esta vazia!" << endl;
            }
            break;
         case 3:
            if (!arvore.empty()) {
               cout << "\nElementos em ordem: " << endl;
               for (const auto& x : arvore) {
                  cout << x << " ";
               }
               cout << endl;
            } else {
               cout << "\nArvore vazia!" << endl;
            }
            break;
         case 4:
            if (!arvore.empty()) {
               cout << "\nQuantidade de elementos: "<< arvore.size() << endl;
            } else {
               cout << "\nArvore vazia!" << endl;
            }
            break;
         case 5:
            if (!arvore.empty()) {
               arvore.clear();
               cout << "\nTodos os elementos foram removidos!" << endl;
            } else {
               cout << "\nArvore ja esta vazia!" << endl;
            }
            break;
         case 6:
            cout << "\nEntre com o valor que deseja buscar a quantidade: ";
            cin >> n;
            cout << "\nQuantidade de elementos iguais a " << n << ": " << arvore.count(n) << endl;
            break;
         case 7:
            cout << "\nSaindo..." << endl;
            break;
         default:
            cout << "\nOpcao incorreta!\nTente novamente..." << endl;
            break;
      }
   }

   cout << "\nFim do programa!\n" << endl;

   return 0;
}