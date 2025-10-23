#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "I'm an animal!" << endl; }
};

class Dog : public Animal {
public:
    void speak() { cout << "I'm a dog!" << endl; }
};

int main() {
    Animal* a = new Dog(); //en c++ por defecto, las llamadas se resuelven en tiempo
                           //de compilacion segun el tipo del puntero -> animal
    a->speak(); //i'm an animal
    return 0;
}
