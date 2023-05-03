#include <string>

using namespace std;

#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon {
   private:
      int sides, length;
   public:
      RegularPolygon();
      RegularPolygon(int, int);
      ~RegularPolygon() {}

      float area();
      int perimetro();
      void preenche(int x, int y);
      string nome();
};

#endif