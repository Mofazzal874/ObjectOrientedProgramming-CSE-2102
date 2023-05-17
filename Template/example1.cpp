#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template<typename R , typename P , typename Q>
R func(P a , Q b){
    return a+b;
}
int main(){
    int a = 5; 
    double b = 5.5;
    float c = 2.3 ; 
    cout<<typeid(func<double>(a,b)).name()<<endl;
    cout<<func<int>(5,5.5)<<endl;
}