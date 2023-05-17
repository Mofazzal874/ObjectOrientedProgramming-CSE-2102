#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class a{
    public:
    a(){
        cout<<"a default"<<endl;
    }
    a(int p){
        cout<<"a parameterized"<<endl;
    }
} ;
class b : public a{
    public:
    b(int k) :a(){
        cout<<"b parameterized"<<endl;
    }
} ;
int main(){
    b test1(1); 
    
}