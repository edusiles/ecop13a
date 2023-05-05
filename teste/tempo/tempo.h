#ifndef TEMPO_H
#define TEMPO_H

class Tempo {
   private:
      int hora, minuto, segundo;

   public:
      Tempo();
      Tempo(int, int, int);
      void setTempo(int, int, int);
      void imprime();
      ~Tempo() {}
};

#endif