#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "I'm an animal!" << endl; }
};

class Dog : public Animal {
public:
    void speak() { cout << "I'm a dog!" << endl; }
};

int main() {
    Animal* a = new Dog(); //con el virtual, c++ usa una tabla de metodos virtuales (vtable) para resolver 
                           //la llamada en tiempo de ejecucion, igual que java
    a->speak(); //i'm a dog
    return 0;
}
