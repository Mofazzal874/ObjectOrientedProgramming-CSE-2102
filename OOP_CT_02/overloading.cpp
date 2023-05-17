#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name, int age)
        : name_(name), age_(age)
    {}

    bool operator!=(const Person& other) const {
        return name_ != other.name_ || age_ != other.age_;
    }

private:
    std::string name_;
    int age_;
};

int main() {
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    Person person3("Alice", 25);

    std::cout << std::boolalpha;
    std::cout << (person1 != person2) << std::endl; // true
    std::cout << (person1 != person3) << std::endl; // false

    return 0;
}



