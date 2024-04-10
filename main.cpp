#include <iostream>
using namespace std;

//Multiple

class A {
   public: 
     int physics;
     int chemistry;
     A(){
       chemistry = 100;
     }
};

class B {
   public: 
     int chemistry;
    B(){
      chemistry = 98;
    }
};

class C: public A, public B {
   public: 
     int maths;

};

int main() {

  // Multiple Inheritance

  C sub;
  sub.physics = 98;
  sub.B::chemistry = 95;
  sub.A::chemistry = 96; //Diamond Problem
  sub.maths = 100;
  cout << "Sub's Physics Marks: " << sub.physics << endl;
  cout << "Sub's Chemistry 'A' Marks: " << sub.A::chemistry << endl; //Diamond Problem
  cout <<  "Sub's Chemistry 'B' Marks: " << sub.A::chemistry << endl; //Diamond Problem
  cout << "Sub's Maths Marks: " << sub.maths << endl;

}