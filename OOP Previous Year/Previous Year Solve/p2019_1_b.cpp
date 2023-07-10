#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class cmplex {
    static int a; 
    public:
    cmplex(){
        cout<<"Default constructor in called\n" ;
         
    }
    static void show(){
        cout<<a<<endl ;
    }
    void print(){
        cout<<a<<endl;
    }

};
int cmplex :: a = 4 ; 
int main(){
    cmplex:: show();

    //but cmplex::print() will result in error . As print() is not a static function, so it can't be accessed with only class like static members  
    //cmplex::print() ;   //error  

}