#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class parent{
    public:
    void show(){
         cout<<"This is show method of parent clss:";
    }
} ; 

int main(){
    parent *ptr; 
    ptr = new parent;
    ptr->show() ;
    
}