#ifndef PILHA_H
#define PILHA_H

template <typename T>

class Pilha {
   private:
      int size, topo;
      T *pilha;

   public:
      Pilha(int = 10);
      ~Pilha() { delete[] pilha; }

      bool push(T&); // Recebe e coloca no topo
      bool pop(T&); // Retorna elemento
      bool isEmpty() {
         if (topo == -1) return true;
         return false;
      }

      bool isFull() {
         if(topo == (size - 1)) return true;
         return false;
      }

};

#endif

template <typename T>
Pilha<T>::Pilha(int sz) {
   size = (sz > 0 ? sz : 10);
   topo = -1;
   pilha = new T[size];
}

template <typename T>
bool Pilha<T>::push(T &valor) {
   if(isFull()) return false;
   
   topo++;
   pilha[topo] = valor;

   return true;
}

template <typename T>
bool Pilha<T>::pop(T &valor) {
   if(isEmpty()) return false;

   valor = pilha[topo];
   topo--;

   return true;
}