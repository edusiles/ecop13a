#include <iostream>
#include "pilha.h"

using namespace std;

// Função para imprimir a pilha
void CPilha::imprimir() const {
    for (int i = 0; i < m_ponteirodaPilha; i++) {
        cout << m_dados[i] << " ";
    }
    cout << endl;
}

// Função para ler a pilha
void CPilha::ler() {
    int valor;
    cout << "Digite o valor para empilhar (ou -1 para parar): ";
    while (cin >> valor && valor != -1) {
        push(valor);
        cout << "Digite o valor para empilhar (ou -1 para parar): ";
    }
}
