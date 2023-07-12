#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class a {
    public:
    a(){ cout<<"_1 " ; }
    a(a &obj) {cout<<" 2 " ; }
};
class b: virtual  a{
    public:
    b() {cout<<" 3 " ; }
    b(b &obj) {cout<<" 4 " ;}
} ;
class c : virtual a{

    public:
    c() {cout<<" 5 " ; }
    c(c &obj) {cout<<" 6 " ;}
} ;
class D: b , c{
    public:

    D(){cout<<" 7 " ;}
    D (D &obj ) {cout<<" 8 " ;  }
};

int main(){
    D d1 ;
    cout<<endl; 
    D d(d1) ; 
    
}