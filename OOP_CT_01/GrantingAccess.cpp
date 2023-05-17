#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class base{
    int i ; 
    protected:
    int x ; 
    public:
    int j = 20  , k = 20  ; 
    void seti(int i ) {
        this->i = i ; 
    } 
    int geti(){
        return i ; 
    }

} ; 
class derived :private base{
    public:
    using base :: j ;
     
    using base:: k  ; 
    using base:: x ;  
    using base:: geti ;
    using base:: seti ; 
};
int main(){
    derived d ;
    d.j = 10 ; 
    d.x = 20 ; 
    d.k = 50 ; 
    d.seti(20); 
    cout<<d.geti()<<endl;

    
}