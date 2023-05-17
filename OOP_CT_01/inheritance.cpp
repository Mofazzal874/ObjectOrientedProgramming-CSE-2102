#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class B{
    int a; 
    public:
    int b; 
    void set_ab() ; 
    int get_a() ; 
    void show_a() ;  

} ;

class D: private B{ //all the public data , function will be in public section of D
        int c; 
        public :
        void mul() ;
        void display()  ; 
        void set_ab() ; 
        
} ;

void B:: set_ab(){
    cout<<"enter value of a and b" <<endl;
    cin>>a>>b ; 
}

int B:: get_a() {
    return a ; 
}
void B:: show_a(){ cout<<"a: "<<a<<endl;}

void D::mul(){
    // c = B*a ; this doesn't work , because a is private in B , they can not be inherited in any way, but can be accessed by making a getter function  
    c = b*get_a() ; 
}

void D:: display(){
    show_a() ; 
    printf(" b = %d\n c = %d\n" , b , c  ) ;
}

int main(){

    D d ; 


    d.set_ab() ; 
    d.display() ; 
    // d.b = 20 ; 
    d.display() ; 
    return 0 ; 
    
}