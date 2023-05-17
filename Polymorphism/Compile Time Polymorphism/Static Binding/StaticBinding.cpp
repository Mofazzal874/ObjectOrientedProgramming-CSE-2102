//Static Binding
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float sumNumbers(float a, float b){
    return a+b;
}
float sumNumbers(float a, float b, float c){
    return a+b+c;
}
int main(){

    cout<<sumNumbers(1.2, 2.3)<<endl;
    cout<<sumNumbers(1.2, 2.3, 3.4)<<endl;
    return 0;
    
}