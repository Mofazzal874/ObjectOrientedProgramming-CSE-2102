#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class parent{
    public:
    void show(){
        cout<<"Parent class\n" ; 
    }

};

int main(){
    parent *ptr[5];
    for(int i = 0 ; i < 5 ; i++){
        ptr[i] = new parent; 
        ptr[i]->show();
    }
    
}