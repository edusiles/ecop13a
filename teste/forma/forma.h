#ifndef FORMA_H
#define FORMA_H

class Forma { // Abstrata
   protected:
      double x, y;
   
   public:
      // Construtor:
      Forma(double xx = 0, double yy = 0) : x{xx}, y{yy} { }
      
      // Destrutor:
      virtual ~Forma() { }

      // Others:
      virtual void imprimeDados() = 0; // Função Virtual pura
      virtual double area() = 0; // Função Virtual pura
};

#endif