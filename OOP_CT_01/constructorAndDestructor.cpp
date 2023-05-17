#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int count= 0 ; 
int count1 = 0 ;
class a {
    public:
    a(){
        cout<<"default of a"<<endl;
    }
    a(int k){
        cout<<"parameterized of a"<<endl;
    }
    ~a(){
        count1++ ; 
        cout<<"destructor of a is called"<<count1<<" times"<<endl;
    }
} ;
 class b: public a {
    public:
    b():a(k){
        cout<<"default of b"<<endl;
    }
    ~b(){
        //count++ ; 
        cout<<"Destructor of b is called"<<endl; 
        // while destructing , always the derived class will get destruct first , 
        // then the base class will be destructed ; 
    }
 } ;
int main(){
    b test1 ; 
    b test2 ;
    
}