#include <iostream>

using namespace std;


class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound..." << endl;
    }
    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    // Runtime polymorphism via base pointers
    a1->sound(); 
    a2->sound(); 

    delete a1;
    delete a2;
    return 0;
}