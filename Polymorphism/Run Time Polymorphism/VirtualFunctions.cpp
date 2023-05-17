/*Let's Understand this with an example:

When a function is made virtual in the base class, Then the function loses its physical existence(same as virtual class).
Its just a blueprint of the function.So when you invoke the function in the base class using a base class pointer or reference, the function is invoked from derived class implementation.

imagine you have a feature from you grandfather, and you inherited this feature from you grandfather and your grandfather is dead(virtual). Now you have your own  modified implementation of this feature with your trace in it.
so now if anyone see this feature , they 'll say it's your feature. But actually it's your grandfather's feature. But you have modified it. So it's your feature now.
But If you doesn't have your own implementation of it ,then people will known it as your grandfather's feature.*/

//POINTS::
//virtual function allows you to do runtime polymorphism.
//if a base class function is declared as virtual, then the function to be called is decided at runtime.
//if a base class function is not declared as virtual, then the function to be called is decided at compile time.

//Imagine you have a base class function which is declared as virtual. 
//You have a derived class which inherits from the base class.
//You have the same function with different implementation in the  many derived class of that base class.
//what virtual functions allows to do is , when you invoke this function using a base class pointer or reference, the most recent implementation of that function is called.
//This is called runtime polymorphism.
//The function to be called is decided at runtime.

//But if the derived class doesn't have its own implementation of that function, then the base class implementation is called.
// The function is not stored in the base class anymore. It is stored in a virtual table.
// The virtual table is a table of function pointers.
// The virtual table is created for every class which has virtual functions.
//The virtual table is created at compile time.
//The virtual table is created in the order of the declaration of the virtual functions.
//The virtual table is stored in the memory of the object of the class.
//When a function is made virtual in the base class, then the derived class also has a virtual table.



//Virtual function can’t be:
	//1. Static members.
	//2. Friends.
	//3. Constructors.
    //4.private members of the class.

//But Destructors can be virtual.
//Virtual functions can be overloaded in child class.










//please read all the points for better understanding
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Instrument{
    public:
    virtual void play(){
        cout<<"Instrument playing"<<endl;
    }
};

class Piano: public Instrument{
    public:
    virtual void play(){
        cout<<"Piano playing"<<endl;
    }
};
int main(){
    Instrument I1 ; 
    I1.play(); //Instrument playing
    Piano P1;
    Instrument* I2 = new Piano() ;
    I2->play(); //If the play() function is not made virtual in the base class, then this will print "Instrument playing"
                //But if the play() function is made virtual in the base class, then this will print "Piano playing" 
    



    //remove the virtual keyword from the play() function in the base class and see the difference.
    //Then The function to be called is decided at compile time.This segment will print "Instrument playing" ;
    
    
    //Instrument* I2 = new Piano() ;
    //I2->play(); //Instrument playing

    //This will become static binding.


    

    
    
}


