#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    try{
        double num1 , num2;
    cin>>num1>>num2;
        if(num2==0){
            throw -1;
        }
    double result =1.00*num1/num2; 
    cout<<result<<endl;
    } 
    catch(int x){
        cout<<"Division by zero"<<endl;
    }

    
}