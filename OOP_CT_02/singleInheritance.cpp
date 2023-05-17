#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class polygon{
    protected:
    int height ; 
    int width ; 
    public:
    polygon(){
    }
    polygon(int a, int b){
        height = a; 
        width = b; 
    }
} ;
class tri: public polygon {
    public:
    tri(int a, int b){
        height = a; 
        width = b; 
    }
    double area(){
        return (height+width)*1.00/2; 
    }
} ;
class rec:public polygon{
    public:
    rec(int a , int b){
        height = a;
        width = b; 
    }
    int area(){
        return height*width ; 
    }
} ;

int main(){
    rec R(3,4) ; 
    cout<<R.area()<<endl;
    tri T(4, 6) ;
    cout<<T.area()<<endl;
    return 0 ; 

    
}