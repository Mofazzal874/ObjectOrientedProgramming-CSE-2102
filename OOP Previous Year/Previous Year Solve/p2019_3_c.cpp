#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class test{
    int real , img ; 
    public:
    test(int real = 0 , int img = 0): real(real) , img(img) {} ; 
    friend ostream& operator <<(ostream& out, test &a){
        out<<a.real<<"+"<<a.img<<"i" ; 
    }
};
int main(){
    test a(5,2) ; 
    cout<<a ;

    
}