#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



class base{
    public:
    virtual void print(){
        cout<<"This is base class"<<endl;
    }
};

class derived1:public base{
    public:
    void print(){
        cout<<"This is derived class"<<endl;
    }
};
class derived2:public base{
    public:
    void print(){
        cout<<"This is derived2 class"<<endl;
    }
};


int main(){
    base *bp , b_ob ; 
    derived1 *dp , d_ob1;
    derived2 *dp2 , d_ob2;
    bp = &d_ob1;//bp must point to derived class object to make dynamic cast work
                //because it is illegal to cast a base class object into a derived class abject

    dp = dynamic_cast<derived1*>(bp);
    if(dp){
        cout<<"Cast from base to derived1 successful"<<endl;
    }
    else{
        cout<<"Cast from base to derived1 failed"<<endl;
    }

    
}