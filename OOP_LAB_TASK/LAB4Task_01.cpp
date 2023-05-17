 //adding two vectors with using friend function
//Mofazzal Hosen
//2/26/23


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class vec{
    int i ; 
    int j ; 
    int k ;

    public:
    vec(){
        i = 0 ; 
        j = 0 ; 
        k = 0 ; 
    }
    vec(int a , int b , int c){
        i = a; 
        j = b; 
        k = c; 
    }
    friend vec add(vec , vec) ;
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

vec add(vec v1 , vec v2){
    vec ans(v1.i+v2.i , v1.j + v2.j , v1.k + v2.k) ;
    return ans ; 
}
int main(){
    vec obj1(2 , 3, 4)  ; 
    vec obj2(3 , 2, -8 ) ;
    vec ans = add(obj1 , obj2) ; 
    ans.display() ; 
    
}