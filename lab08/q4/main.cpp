#include <iostream>
#include <stdexcept>

using namespace std;

class CPilha {
    private:
        int *m_dados;
        int m_ponteirodaPilha;
        int m_tamanho;

    public:
        CPilha(int memoria);
        CPilha();
        ~CPilha();
        void imprimir() const;
        void ler();
        void push(int push_this);
        int pop();
};

CPilha::CPilha(int memoria) {
    m_tamanho = memoria;
    m_dados = new int[m_tamanho];
    m_ponteirodaPilha = 0;
}

CPilha::CPilha() : CPilha(100) { }

CPilha::~CPilha() {
    delete[] m_dados;
}

void CPilha::imprimir() const {
    for (int i = 0; i < m_ponteirodaPilha; i++) {
        cout << m_dados[i] << " ";
    }
    cout << endl;
}

void CPilha::ler() {
    int valor;
    cout << "Digite o valor para empilhar (ou -1 para parar): ";
    while (cin >> valor && valor != -1) {
        try {
            push(valor);
        } catch (const overflow_error& e) {
            cout << "Erro: Pilha cheia!" << endl;
        }
        cout << "Digite o valor para empilhar (ou -1 para parar): ";
    }
}

void CPilha::push(int push_this) {
    if (m_ponteirodaPilha >= m_tamanho) {
        throw overflow_error("Pilha cheia");
    }
    m_dados[m_ponteirodaPilha] = push_this;
    m_ponteirodaPilha++;
}

int CPilha::pop() {
    if (m_ponteirodaPilha <= 0) {
        throw underflow_error("Pilha vazia");
    }
    m_ponteirodaPilha--;
    return m_dados[m_ponteirodaPilha];
}

int main() {
    CPilha pilha(5);

    cout << "Empilhando valores..." << endl;
    try {
        pilha.push(10);
        pilha.push(20);
        pilha.push(30);
        pilha.push(40);
        pilha.push(50);
        pilha.push(60);  // Tentando inserir mais um elemento, deve lançar uma exceção
    } catch (const overflow_error& e) {
        cout << "Erro: Pilha cheia!" << endl;
    }

    cout << "Conteúdo da pilha: ";
    pilha.imprimir();

    cout << "Desempilhando valores..." << endl;
    try {
        while (true) {
            int valor = pilha.pop();
            cout << "Valor desempilhado: " << valor << endl;
        }
    } catch (const underflow_error& e) {
        cout << "Erro: Pilha vazia!" << endl;
    }

    return 0;
}
