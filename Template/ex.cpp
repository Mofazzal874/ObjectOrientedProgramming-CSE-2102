#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template <typename T>
void fun(const T &x){
    static int count = 0 ; 
    cout<<x<<" "<<count++<<endl;
    return ;
}
int main(){
    fun<int>(1) ; 
    fun<int> (2) ; 
    fun<double>(1.1) ;
    fun<double>(1.2) ;
    fun<float> (1.1) ; 
    return 0 ;  
}