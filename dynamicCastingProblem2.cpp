#include <iostream>
#include <string>

class Animal {
public:
    virtual void performAction() const = 0;
};

class Dog : public Animal {
public:
    void performAction() const override {
        std::cout << "Dog is barking!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void performAction() const override {
        std::cout << "Cat is meowing!" << std::endl;
    }
};

class Bird : public Animal {
public:
    void performAction() const override {
        std::cout << "Bird is flying!" << std::endl;
    }
};

void performAnimalAction(const Animal* animal) {
    if (const Dog* dog = dynamic_cast<const Dog*>(animal)) {
        dog->performAction();
    }
    else if (const Cat* cat = dynamic_cast<const Cat*>(animal)) {
        cat->performAction();
    }
    else if (const Bird* bird = dynamic_cast<const Bird*>(animal)) {
        bird->performAction();
    }
    else {
        std::cout << "Unknown animal!" << std::endl;
    }
}

int main() {
    Dog dog;
    Cat cat;
    Bird bird;

    performAnimalAction(&dog);
    performAnimalAction(&cat);
    performAnimalAction(&bird);

    return 0;
}
