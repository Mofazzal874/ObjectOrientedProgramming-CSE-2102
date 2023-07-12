#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class rectangle{
    protected:
    int length ; 
    int width ; 
    public:
    rectangle(){
        length = 0 ; 
        width = 0 ; 
    }
    rectangle(int a , int b ) {
        length = a; 
        width = b ; 

    } 
    virtual int area(){
        return length*width;
    }
};
class triangle:public rectangle{
    
    int height ; 
    public:
    triangle(){
        length = 0 ; 
        width = 0 ; 
        height = 0 ;
    }
    triangle(int a   , int b , int c ){
        length = a ; 
        width = b ; 
        height = c; 
    }
    int area(){
        return (length+width*height)/3 ;
    }
} ;
int main(){

    rectangle* rPtr , rOb(2,3) ; 
    triangle tOb(2,3,5) ; 
    rPtr = &rOb ; 
    cout<<rPtr->area()<<endl;
    rPtr = &tOb ; 
    cout<<rPtr->area()<<endl; 
    
}