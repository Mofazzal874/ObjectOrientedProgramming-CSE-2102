#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class overloading{
    public:
    int real ; 
    int img ;
    
    overloading(int real , int img){
        real = real ;
        img = img ; 
    }
    overloading operator +(overloading &obj){
        return overloading(real + obj.real , img + obj.img) ; 
    }
    overloading friend operator +(int num , overloading &obj){
        return overloading(num + obj.real , obj.img) ; 
    } 
} ;


int main(){
    overloading a(5, 7) ; 
    overloading b(6,7) ; 
    overloading c = a+ b ; 
    overloading d = 5 + a ; 
    
    
}