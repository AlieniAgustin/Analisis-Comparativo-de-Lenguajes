#include<iostream>
using namespace std;

class A{
  public:
    void saludo(){
      cout << "Hola soy A!" << endl;
    }
};

class B : public A {};

class C : public A {};

class D : public B, public C {};

int main(){
  D d;
  //no puedo hacer d.saludo() porque hay ambiguedad
  d.B::saludo(); //hace el saludo() desde B
  d.C::saludo(); //hace el saludo() desde C 
  return 0;
}

