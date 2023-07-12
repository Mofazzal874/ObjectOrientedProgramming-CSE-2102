#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class creature {
    public:
    virtual void eat(){
        cout<<"All creatures eat\n"  ;
    }
};
class human : public creature{
    public :
    void eat(){
        cout<<"all humans eat"<<endl ;
    }
} ;

// different type casting _
// 1.static_cast
// 2.const_cast
// 3.reinterpret_cast
// 4.dynamic_cast

int main(){

    creature *pp , oCr ; 
    human *hum , oHum ; 
    //write from here  ;
    //General cast
    pp= &oHum  ; //with this you can only access the members that are inherited from creature(base) to human(derived) 
    ((human*)pp)->eat() ; //casting base pointer to derived class pointer.As this is a derived class pointer , now you cann access all derived class's member with this method
    human* d = (human*)pp ; //the above is same as this one . In here we are just putting the typecasted pointer to a derived class pointer


    //static_cast   --this is same as general cast
    //syntax: static_cast<type>(object)     //you must give the () bracket around object you're trying to cast
    human* x = static_cast<human*> (pp) ; //this is same as before (general casting) . we are casting base pointer to derived pointer

    //const_cast -- here const_cast is not possible as no const member or variable is available here 

   //dynamic cast ;
   //here eat is virtual , so dynamic cast is possible 
   pp = &oHum  ;
   hum = dynamic_cast<human*> (pp) ;  //it is valid 
   if(hum) cout<<"cast Ok\n" ; 
   else cout<<"Cast from base to derived failed\n" ; 

   pp = &oCr ; 
   pp = dynamic_cast<creature*> (pp) ; //this is also ok ; 
   if(pp) cout<<"Base to base cast is ok\n" ; 
   else {cout<<"failed to cast from base to base\n" ; }

   pp = &oCr ; 
   //hum = dynamic_cast<creature*> (pp) ;     //comment out and this will throw an error; 
   if(hum) cout<<"derived to base cast failed\n" ; 
   else cout<<"derived to base case is ok\n" ;  



    
}