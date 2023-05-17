#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
#define csl cout<<"Case "<<qq<<":"<<endl
class a{
    int num ; 
    public:
    a(){

    }
    a(int val){
        num = val; 
    }
    void operator ++(int){
        num= num+1; 
    }
    void output(){
        cout<<num; 
    }
} ;
int main(){
    a obj(5) ; 
    obj++; 
    obj.output(); 
    
    
}