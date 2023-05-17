// level:Intermediate
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class convert{
    protected:
    double val1 ; 
    double val2 ; 
    public:
    convert(double i){
        val1 = i ;  
    }
    double getConverted(){
        return val2 ; 
    }
    double getVal1(){
        return val1 ; 
    }
    virtual void compute() = 0; //now the class become an abstract class

} ;

class farenToCel : public convert{
    public:
    farenToCel(double i):convert(i){} ; 
    void compute(){
        val2 = (val1-32)/1.8; 

    }
} ;
class literToGram:public convert{
    public:
    literToGram(double i):convert(i){} ;  
    void compute(){
        val2 = val1/3.7854 ; 
    }
};
int main(){
    convert* p ; 
    farenToCel ftc(70) ;
    p = &ftc ;  
    p->compute(); 
    cout<<p->getConverted()<<endl;
    literToGram ltg(4) ;
    p = &ltg ; 
    p->compute(); 
    cout<<p->getConverted()<<endl; 

    
}