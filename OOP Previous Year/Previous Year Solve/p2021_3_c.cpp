#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class cmplex{
    int real , img ; 
    public:
    cmplex(){
        real = 0 ; 
        img = 0 ; 
    }
    cmplex(int r , int i ){
        real = r; 
        img = i ; 
    } ; 
    cmplex operator*(cmplex& t){
        return cmplex(real*t.real , img*t.img) ;
    }
    cmplex operator++(){
        ++real; 
        ++img;
        return *this ;  
    }
    cmplex operator++(int){
        real++ ; 
        img++ ; 
        return *this ; 
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    cmplex a(3,5) ;
    cmplex b(4,6) ; 
    cmplex c3 = a*b ; 
    cmplex c4 = ++c3 ; 
    cmplex c5 = c4++  ;  
    c5.display() ; 

    
}