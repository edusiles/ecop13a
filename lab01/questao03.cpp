#include <iostream>

using namespace std;

// Função de exibição do menu
void menu() {
   cout << "Escolha a questão que deseja exibir:\n";
   cout << "1 - Fatorial\n";
   cout << "2 - 20 primeiros números primos\n";
   cout << "3 - Atual exercício\n";
   cout << "4 - Mudança de base\n";
   cout << "5 - Retângulo\n";
   cout << "6 - Soma até N\n";
   cout << "7 - MDC\n";
   cout << "8 - Binário\n";
   cout << "9 - Palíndromo\n";
   cout << "0 - Sair\n" << endl;
}

int main(void) {
   int opcao;

   do {
      menu(); // Exibição das opções
      cin >> opcao;
      
      switch (opcao) { // Tratando a opção escolhida
         case 1:
            cout << "Programa Fatorial! \n" << endl;
            break;
         case 2:
            cout << "Programa 20 primeiros números primos! \n" << endl;
            break;
         case 3:
            cout << "Programa Atual! \n" << endl;
            break;
         case 4:
            cout << "Programa Mudança de Base! \n" << endl;
            break;
         case 5:
            cout << "Programa Retângulo! \n" << endl;
            break;
         case 6:
            cout << "Programa Soma até N! \n" << endl;
            break;
         case 7:
            cout << "Programa MDC! \n" << endl;
            break;
         case 8:
            cout << "Programa Binário! \n" << endl;
            break;
         case 9:
            cout << "Programa Palíndromo! \n" << endl;
            break;
         default:
            break;
      }

   } while (opcao != 0);

   cout << "Fim do programa!\n" << endl;
}