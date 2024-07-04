#include <iostream>

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Woof Woof" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Meow Meow" << std::endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Animal *animal1 = &d;
    Animal *animal2 = &c;
    animal1->sound();
    animal2->sound();

    return 0;
}
