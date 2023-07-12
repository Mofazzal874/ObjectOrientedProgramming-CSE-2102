#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(int x) throw(int , double){  //here we are restricting the function to defaulty throw only for int and double 
                                    //throw 1 and 0 will not be thrown
    if(x == 1) throw 1; 
    else throw 0 ; 
    return 0 ; 
}
int main(){
    try{
        f(1) ; 
    }
    catch(int){
        cout<<"Exception type integer is detected\n" ; 
    }
    catch(double){
        cout<<"Exception type double is detected\n" ; 
    }
    
}