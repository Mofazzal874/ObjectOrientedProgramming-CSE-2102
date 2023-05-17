#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class point{
    protected:
    int x , y ; 
    public:
    void set(int a , int b){
        x = a ; y = b ; 
    }
    void foo() ; 
    void print() ; 
};

class circle:public point{
    private:
    double r; 
    public:
    void set(int a , int b , int c){
        point::set(a, b)  ;
        r = c;  
    }
    void print() ; 
} ;

void point::print(){
    cout<<x<<" "<<y<<" "<<endl;

}
int main(){
    circle c ; 
    c.set(10 , 10 ,100) ; 
    c.foo() ; 
    c.print() ; 

    
}