#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
namespace nm1{
    void func(){
        cout<<"1st Namespace \n" ; 
    }
}
namespace nm2{
    void func(){
        cout<<"2nd namespace \n" ; 
    }
}
using namespace nm1 ;
int main(){
   func() ; 

}