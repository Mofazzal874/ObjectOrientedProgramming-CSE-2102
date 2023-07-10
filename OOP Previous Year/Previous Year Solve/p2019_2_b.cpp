
//this program demonstrate all types of constructor and destructor calls for 
//different scenario while making any objects

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class test{
    int m = 10 ; 
    public:
    test(){
        cout<<" Default constructor\n" ; 
    }
    test(int a , int b , int c){
        cout<<"Parameterized constructor\n" ; 
    }
    test(const test &t) {     //you must use the keyword const in the parameter .Else it will cause an error
        cout<<"copy constructor called\n" ; 
    }
    ~test(){
        cout<<"Destructor Called\n" ; 
    }

    
};

test* func(test t){ //a function which take a test object as "pass by value"

    return NULL ; //dummy function to check 
}


test* func1(test& t , int a){ //a function which take a test object as "pass by value"

    return NULL ; //dummy function to check 
}

int main(){

    test a; //implicit default constructor called;

    test b(5 , 10 , 15) ; //implicit parameterized cons. called. 

    func(b) ; // implicit default copy constructor called  as soon as "pass by value" happens in the function func(test t) for new copy object t.
                //what happens here actually while passing by value? assignment operation of objects happens - t = b . so this will invoke "copy constructor"
                //and copy object t will be implicitly destructed as soon as the function returns to main() function

    func1(a, 1) ; //this will not call any constructor as "pass by reference" happens.This is one of the advantages of using "pass by reference" in c++.

    test* ptr = &a ; //this will not call any constructor.As pointer to any objects does not create any new object . It just create a pointer type variable which stores
                    //the address of a particular object.
    
    test p = a ; //implicit copy constructor as "assignment operation for objects" happens

    delete ptr;  //explicit destructor called for object a  



    test c = test() ; //explicit default constructor called ; 

    test d = test(5 , 10 , 15) ; //explicit parameterized constructor called ;

    //Note : You should not use explicit destructor calls . Because it will cause in undefined behaviour 
     //here destructor will be called twice .One for implicit destructor and other one is for explicit call
    //so, explicit destructor call is not recommended
    d.~test();  //not recommended



    //destructor calls:

    // destructor called(for d)         //for using d.~test.This is explicit destructor call for d
    // destructor called(for d)        //implicit destructor call   
    // destructor called(for c)        //implicit destructor call  
    // destructor called(for p)        //implicit destructor call 
    // destructor called(for b)        //implicit destructor call 
    // destructor called(for a)        //implicit destructor call 







}

// output:
//  Default constructor
// Parameterized constructor
// copy constructor called
// Destructor Called
// copy constructor called
//  Default constructor
// Parameterized constructor
// Destructor Called
// Destructor Called
// Destructor Called
// Destructor Called
// Destructor Called