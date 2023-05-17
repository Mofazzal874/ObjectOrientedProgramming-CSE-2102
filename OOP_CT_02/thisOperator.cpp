#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class overloading{
    int real; 
    int img ; 
    public:
    overloading(){

    }
    overloading(int a, int b){
        this->real =  a; 
        this->img = b; 
    }
    void input(int real , int img){
        this->real = real;
        this->img = img ; 
    }
    overloading add(overloading &obj){
        overloading temp ; 
        temp.real = real + obj.real; 
        temp.img = img + obj.img ; 
    }
    overloading operator +(overloading &c1){
        overloading temp ; 
        temp.real = real + c1.real ; 
        temp.img = img + c1.img ; 
        return temp ; 
    }
    overloading friend operator +(int num , overloading &c2){
        overloading temp ; 
        temp.real = num + c2.real; 
        temp.img = c2.img ; 
        return temp ; 
    }
    void output(){
        cout<<real<<"+i"<<img ; 
    }
} ;
int main(){
    overloading a , b ; 
    a.input(1,2) ; 
    b.input(3,4) ;
    overloading c; 
    c = a + b; 
    c = 5 + a ; 
    c.output(); 

    
}