#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class a {
    public:
    void display(){
        cout<<"a\n" ; 
    }
}; 
class B : public a{
    public:
    void display(){
        cout<<"b\n" ; 
    }
};
int main(){
    B b ; 
    b.display() ; //you cannot invoke display() of a using B object . 
    //But using scope resolution operator you can also call display() function of 

    
}