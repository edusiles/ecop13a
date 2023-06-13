#ifndef VETOR_H
#define VETOR_H

#include <iostream>
#include <stdexcept>

using namespace std;
template <typename T, int tamanho>
class Vetor {
   private:
      T *vet;
      int qt_atual;
   
   public:
      Vetor();
      ~Vetor() { delete[] vet; }

      void add(const T&);
      void ordena();
      void imprime();
};

// Funções:
template <typename T, int tamanho>
Vetor<T, tamanho>::Vetor() {
   vet = new T[tamanho];
   qt_atual = 0;
}

template <typename T, int tamanho>
void Vetor<T, tamanho>::add(const T& x) {
   if (qt_atual >= tamanho) {
      throw overflow_error("Vetor cheio. Impossivel adicionar elemento.");
   }

   vet[qt_atual] = x;
   qt_atual++;
}

template <typename T, int tamanho>
void Vetor<T, tamanho>::ordena() {
   T aux;

   static_assert(std::is_default_constructible<T>::value, "Tipo deve ser default constructible");
   static_assert(std::is_copy_assignable<T>::value, "Tipo deve ser copy assignable");
   static_assert(std::is_copy_constructible<T>::value, "Tipo deve ser copy constructible");
   static_assert(std::is_move_assignable<T>::value, "Tipo deve ser move assignable");
   static_assert(std::is_move_constructible<T>::value, "Tipo deve ser move constructible");
   static_assert(std::is_convertible<T, bool>::value, "Tipo deve ser convertível para bool");

   if (qt_atual <= 1)
      return;

   for(int x = 0; x < tamanho; x++) 
      for(int i = 0; i < tamanho - 1 - i; i++) {
         if (vet[i] > vet[i+1]) {
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
         }
      }
   
}

template <typename T, int tamanho>
void Vetor<T, tamanho>::imprime() {
   for (int i = 0; i < tamanho; i++) {
      cout << vet[i] << " ";
   }
}

#endif