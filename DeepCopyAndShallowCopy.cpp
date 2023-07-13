#include <iostream>

class MyClass {
private:
    int* data;

public:
    Myclass() {} ; 
    MyClass(int value) {
        data = new int;
        *data = value;
    }

    // Copy Constructor (Deep Copy)
    MyClass(const MyClass& other) {
        data = new int;
        *data = *(other.data);
    }

    // Assignment Operator Overload (Deep Copy)
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int;
            *data = *(other.data);
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }

    int getValue() const {
        return *data;
    }
};

int main() {
    // Shallow Copy
    MyClass obj1(5);
    MyClass obj2 = obj1;
    obj1.getValue(); // Output: 5
    obj2.getValue(); // Output: 5

    // Deep Copy
    MyClass obj3(10);
    MyClass obj4;
    obj4 = obj3;
    obj3.getValue(); // Output: 10
    obj4.getValue(); // Output: 10

    return 0;
}
