//adding two vectors with operator overloading 
//mofazzal Hosen
//2.26.23

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class vec{
    int i , j ,  k ; 
    public:
    vec(){
        i = 0 ; j = 0 ; k = 0 ; 
    }
    vec(int a, int b , int c){
        i = a; 
        j  = b ; 
        k = c ; 
    }
    vec operator + (vec v){
        vec temp ; 
        temp.i = i + v.i ; 
        temp.j = j + v.j ; 
        temp.k = k + v.k ; 
        return temp ; 
    }
    vec operator - (vec v){
        vec temp ; 
        temp.i = i - v.i ; 
        temp.j = j - v.j ; 
        temp.k = k - v.k ; 
        return temp ; 
    }
    void display(){
        cout<<i<<"i" ; 
        if(j >= 0) cout<<"+";
        else cout<<" " ;
        cout<<j<<"j" ;
        if ( k >= 0 ) cout<<"+ ";
        else cout<<" ";
        cout<<k<<"k"<<endl;
    }

} ;

int main(){
    vec obj1(2, 3, 4) , obj2(3,2,-8) ; 
    vec ans = obj1 + obj2  ; 
    ans.display() ;  

    
}