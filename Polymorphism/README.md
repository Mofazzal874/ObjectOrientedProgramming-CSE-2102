# Polymorphism
First of all, we need to know what is polymorphism?
Polymorphism in c++ is a concept by which we can perform a single action in different ways. 

**Example:**
- You have a mobile phone and you can call your friends, take photos, play games, listen to music, etc. But in the end, all you are doing is using your mobile phone. This is polymorphism. A single entity (mobile phone) performing different forms (calling, camera, music) is polymorphism.

**Polymorphism in C++**

First you need to know what is Runtime and what is compile Time?

**Compile Time:**
- Compile time is the instance where the code you entered is converted to executable while executing the program.

**Runtime:**
- Runtime is the instance where the executable is running.

**Polymorphism in C++ can be of two types:**

- Compile time polymorphism
- Runtime polymorphism


- Compile time polymorphism
    - Static binding
        - Function overloading
        - Operator overloading
    
- Run time polymorphism
    - Dynamic binding
        - Function overriding
        - Virtual functions

**Now, what is binding?**

In c++ , Binding means linking of a function call to its definition.


**Static binding**:
- Binding which can be resolved at compile time by compiler is known as static or early binding.
- Compiler knows how many objects and functions should be created.
- It is also known as compile time binding.
- It is also known as early binding.


**Way of Doing static Binding in C++:**
- Function overloading
- Operator overloading
- Every Function Call is binded statically by default.
- constructor overloading is also an example of static binding.

---
**N.B. :** a constructor cannot be overridden. If you try to write a super class’s constructor in the sub class, compiler treats it as a method and expects a return type and generates a compile time error.
```java
class DemoTest{
   DemoTest(){
      cout<<"This is the constructor of the demo class\n";
   }
}
public class OverridingConstructor extends DemoTest {
   DemoTest(){
      System.out.println("This is the constructor of the demo class");
   }
}
```

---

**Advantages and Disadvantages of Dynamic Binding:**
- Static Binding happens by default.A normal function call is always binded statically.But We can also do static binding explicitly by using operator overloading and function overloading.

- Static binding is faster than dynamic binding.As binding happens in compile time , this type of binding makes the program faster.

static binding occurs during compile-time and is based on the static type of the variables involved. It is resolved by the compiler and typically used for non-virtual functions and variables. The specific function or variable associated with the name is determined based on the declared type of the object or variable.
**Example:(static binding by default)**
```c++
int x = 5;
int y = 10;
int sum = x + y;
```
In this case, the compiler knows the types of variables x and y at compile-time, so it can bind the + operator to the appropriate addition operation.

Another example is operator Overloading

**Example: (static binding explicitly by using operator overloading )**
    
   ```c++
    
    class Point {
    public:
        int x, y;
        Point(int x, int y) : x(x), y(y) {}
        Point operator+(const Point& rhs) {
            return Point(x + rhs.x, y + rhs.y);
        }
    };
    int main()
    {
        Point p1(1, 2);
        Point p2(2, 3);
        Point p3 = p1 + p2;  // Static binding occurs here
                            //Here compiler knows that +   operator is overloaded
        return 0;
    }

```


- Actually, In operator overloading , overloaded operators are called as function so that static binding could happen.
For example:
```c++
for a operation like :
nX + nY: operator+(nX, nY) (where operator+ is the name of the function). 

Similarly dX + dY becomes operator+(dX, dY). 
Even though both expressions call a function named operator+(), function overloading is used to resolve the function calls to different versions of the function based on parameter type(s).
```

   



**Dynamic binding**: 
- Compiler doesn't know; we will say that in the runtime of the program.
- Dynamic binding occurs during runtime and is associated with polymorphism and virtual functions. It allows for the selection of the appropriate function or method implementation based on the actual type of the object rather than its declared type. This means that the specific function or variable associated with the name is determined by the type of object or variable at runtime.

**Advantages and Disadvantages of Dynamic Binding:**
- Static Binding Does not happen by default.We have to do it explicitly by using virtual functions.
- Dynamic binding is slower than static binding.As binding happens in runtime , this type of binding makes the program slower.
- Dynamic binding makes the program much more flexible and extensible.So that a user can determine which function definition the user want to invoke at runtime.


```c++
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle();
    shapePtr->draw();  // Dynamic binding occurs here
                      //Here compiler doesn't know that draw() is virtual
                      //But it will be known at runtime
                      //So, it will call the draw() of Circle class
                      //This is called dynamic binding
    delete shapePtr;
    return 0;
}
```


In this case, the draw() function is declared as virtual in the base class Shape and overridden in the derived class Circle. When shapePtr->draw() is called, the actual type of the object pointed to by shapePtr is determined at runtime, and the appropriate draw() implementation is dynamically bound.

Dynamic binding enables polymorphism and allows objects of different types to be treated interchangeably through their common base class interface.

Overall, binding in C++ determines the association between names and entities, and the type of binding influences how these associations are resolved during program execution.



