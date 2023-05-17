//this is same as example 2 .But here we are declaring the function outside of class
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template <typename T>
class math{
    int val1 , val2;
    public:
    T addNumbers(T a , T b);
    T multNumbers(T a , T b);

};
template <typename T>
T math<T>::addNumbers(T a , T b){
    return a+b;
}
template <typename T>
T math<T>::multNumbers(T a , T b){
    return a*b;
}

int main(){
    int a = 10 ; 
    int b = 20 ; 
    math<int> m1;
    cout<<m1.addNumbers(a,b)<<endl;
    cout<<m1.multNumbers(a,b)<<endl;
    math<double> m2;
    cout<<m2.addNumbers(5.5,5.5)<<endl;
    cout<<m2.multNumbers(5.5,5.5)<<endl;
    
}