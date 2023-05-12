#ifndef FORMA_H
#define FORMA_H

class Forma {
   protected:
      double x, y;
   
   public:
      // Construtor:
      Forma(double = 0, double = 0);
      
      // Destrutor:
      ~Forma() { }

      // Setters:
      void setX(double num) { x = num; }
      void setY(double num) { y = num; }

      // Getters:
      double getX() { return x; }
      double getY() { return y; }

      // Others:
      virtual void imprimeDados();
      virtual double area() { return 0; };
};

#endif