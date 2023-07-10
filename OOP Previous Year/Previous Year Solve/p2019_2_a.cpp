#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Set {
    int m ; 
    public:
    Set(int i = 0 ){
        m = i ; 

    }
    void display(){
        cout<<m ; 
    }
}; 

int main(){
    Set B ;
    B.display() ; 
    return 0 ; 
    
}

//You must not create any default constructor in this case like_
// Set(){
//      m = 10 ; 
// }

// Because this will cause ambiguity . 
// Compiler will be confused which constructor to call 
