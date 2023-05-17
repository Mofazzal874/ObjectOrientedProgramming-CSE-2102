#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class a{
    public:
    void print(){
        cout<<"From A"<<endl;
    }
}; 
class b : public a{
    public:
    void print(){
        cout<<"From B"<<endl;
    }
} ;
int main(){
    b B; 
    B.print(); 


    
}