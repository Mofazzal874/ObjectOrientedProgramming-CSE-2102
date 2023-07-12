//also see -2020_6_a 
//these two uses same theory

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Base {
    public:
    int b; 
    void display(){
        cout<<"base\n" ; 
    }
};

class Derived :public Base {
    public: int d ;
    void display(){
        cout<<"derived\n" ; 
    } 

};

int main(){
    Base *bp , b ; 
    Derived *dp , d ; 
    bp = &d;
    bp->b = 2 ; 
    bp->d = 3 ; //Here error occurs in bp->d =3 ; 
    bp->display() ; 
    
}
/*
though bp is pointing to d object , but it can not access its member data/functions 
though d is derived from base class , the base pointer can not access it member variables through the use of pointer 
solution:

01.do type casting :(base class pointer to derived class pointer)
bp->d = 3  line will be: 
((Derived*)bp)->d = 3 ; 
now d can be accessed 



02.Or you can also do static_cast to do this :
Base *bp , b ; 
    Derived *dp , d ; 
    bp = &d;
    bp->b = 2 ; 
    bp = static_cast<Derived*>(bp) ; //now bp is a Derived pointer
    bp->display() ;

*/