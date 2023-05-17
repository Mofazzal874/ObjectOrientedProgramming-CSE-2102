#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template <typename T>
class math{
    T val1 , val2;
    public:
    T addNumbers(T a , T b){
        return a+b;
    }
    T multNumbers(T a , T b){
        return a*b;
    }

} ;
int main(){
    math<int> m1;
    cout<<m1.addNumbers(5,5)<<endl;
    cout<<m1.multNumbers(5,5)<<endl;
    math<double> m2;
    cout<<m2.addNumbers(5.5,5.5)<<endl;
    cout<<m2.multNumbers(5.5,5.5)<<endl;
    
}