#ifndef DATE_H
#define DATE_H

class Date {
   private:
      int day, month, year;
      mutable int count; // "Constant"
      static int howmany; 
 
   public:
      // Basics:
      Date();
      Date(int, int, int);
      ~Date();

      // Getters
      int getDay() const {return day;}
      int getMonth() const {return month;}
      int getYear() const {return year;}
      int getCount() const {return count;}

      // Setters
      Date& setDay(int);
      Date& setMonth(int);
      Date& setYear(int);

      // Others:
      void print() const;
      static int howManyInstances() {return howmany;}
};

#endif