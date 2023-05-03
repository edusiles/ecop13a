#include <iostream>
#include "tempo.h"

using namespace std;

Tempo::Tempo() {
   hora = 0;
   minuto = 0;
   segundo = 0;
}

Tempo::Tempo(int hh, int mm, int ss) {
   setTempo(hh, mm, ss);
}

void Tempo::setTempo(int hh, int mm, int ss) {
   hora = (hh >= 0 && hh <= 23) ? hh : 0;
   minuto = (mm >= 0 && mm <= 59) ? mm : 0;
   segundo = (ss >= 0 && ss <= 59) ? ss : 0;
}

void Tempo::imprime() {
   cout << "{" << hora << ":" << minuto << ":" << segundo << "}";
}