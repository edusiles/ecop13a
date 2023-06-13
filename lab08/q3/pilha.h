// arquivo pilha.h
// header file para classe pilha
#ifndef PILHA_H
#define PILHA_H

class CPilha {
   private:
      int *m_dados;       // ponteiro para dados da pilha
      int m_ponteirodaPilha;   // apontador do topo da pilha
      int m_tamanho;      // espaço de memória reservado para o objeto

   public:
      CPilha(int memoria);    // construtor com parâmetros
      CPilha();               // construtor sem parâmetros
      ~CPilha();
                    // destrutor
      int pop(int *pop_to);   // puxar dados da pilha
      int push(int push_this);    // empurrar dados para a pilha
      void imprimir() const;  // função para imprimir a pilha
      void ler();             // função para ler a pilha
};

#endif
