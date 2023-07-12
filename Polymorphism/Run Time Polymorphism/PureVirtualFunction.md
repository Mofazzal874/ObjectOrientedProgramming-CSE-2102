# **Pure virtual function** 
- A pure virtual function is a function that is declared as virtual in the base class and is set to 0.
- a pure virtual function doesn't contain any implementation.It is just a function declaration.It provides an interface for the derived class to implement.
- A class containing at  least one pure virtual function is called an abstract class.

---
**Points about abstract class:**
- After making a class abstract by making a function pure virtual, we can't create an object of that class in the main function.This will throw an error.
- But We can create a pointer of that class type and can point to the derived class object.

```c++
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Instrument{ // this class just become Abstract class
    public:
    virtual void play() = 0  ; //Pure virtual function
    //does not contain any implementation
    //It is just a function declaration
};

class Piano: public Instrument{
    public:
    virtual void play(){
        cout<<"Piano playing"<<endl;
    }
};
int main(){
    Instrument I1 ; //This will throw an error.Because we can't create an object of abstract class 
    Piano P1;
    Instrument* I2 = new Piano() ;//This is valid.we are creating a pointer of abstract class.
    I2->play();

}
```

---


- An abstract class is a class that has at least one pure virtual function.





**Example of pure virtual function:**

```c++
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Instrument{ // this class just become Abstract class
    public:
    virtual void play() = 0  ; //Pure virtual function
    //does not contain any implementation .It is just a function declaration
    //This pure virtual function forces all the derived class to make their own 
    //implementation of this function
};

class Piano: public Instrument{
    public:
    void play(){
        cout<<"Piano playing"<<endl;
    }
};
class Guitar: public Instrument{
    public:
    void play(){
        cout<<"Guitar playing"<<endl;
    } 
};
int main(){

    Instrument* I2 = new Piano() ;
    I2->play();//Piano playing
    Instrument* instruments[4] = {new Piano(), new Guitar(), new Piano(), new Guitar()} ;
    for(int i=0;i<4;i++){
        instruments[i]->play();//This is dynamic binding
    }

}
```
---
**NOte:**
virtual function can't be :
- static
- friend
- constructor
-Private member of the class

But it can be :
-Destructor

And virtual function can be overloaded:
```c++
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Instrument{ // this class just become Abstract class
    public:
    virtual void play() = 0  ; //Pure virtual function
    //does not contain any implementation .It is just a function declaration
    //This pure virtual function forces all the derived class to make their own 
    //implementation of this function
};

class Piano: public Instrument{
    public:
    void play(){
        cout<<"Piano playing"<<endl;
    }
    void play(int a){
        cout<<a<<" Piano playing"<<endl;
    }
};
class Guitar: public Instrument{
    public:
    void play(){
        cout<<"Guitar playing"<<endl;
    } 
};
int main(){

    Instrument* I2 = new Piano() ;
    I2->play();//Piano playing
    Instrument* instruments[4] = {new Piano(), new Guitar(), new Piano(), new Guitar()} ;
    for(int i=0;i<4;i++){
        instruments[i]->play();//This is dynamic binding
    }
    Piano P1;
    P1.play(5);// 5 Piano playing

}
```
---


---
**Points to remember:**
- after making a function virtual in the base class, we must override and implement its another copy in the derived class to use it.
- Or the compiler will detect the inherited class as abstract class and will throw an error.

- If we don't override the virtual function in the derived class, then using the function , compiler will throw an error.
- So overriding of that function is mandatory in the derived class.

```c++
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Instrument{ // this class just become Abstract class
    public:
    virtual void play() = 0  ; //Pure virtual function
    //does not contain any implementation
    //It is just a function declaration
};

class Piano: public Instrument{
};
int main(){ 

    Piano P1;//This will throw an error.Because Piano doesn't override the play() function .so as it is inherited from base class and become an abstract class, we can't create an object of it.
    Instrument* I2 = new Piano() ; //error: pure virtual function "Instrument::play" has no overrider
    I2->play();

}
```
---
