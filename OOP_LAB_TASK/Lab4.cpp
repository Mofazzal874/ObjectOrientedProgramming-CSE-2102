//operator Overloading
//Mofazzal Hosen
//2.26.2023




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define tc ll tt, qq=0; cin>>tt; while(qq++<tt)
#define cs cout<<"Case "<<qq<<": "
#define csl cout<<"Case "<<qq<<":"<<endl


class complexN{
    int real ; 
    int img ; 
    public:

        complexN(){
            real = 0 ;
            img = 0 ; 
        }
        complexN(int r , int i ){
            real = r; 
            img = i ; 
        }
        void print(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        complexN operator + (complexN c ){
            complexN temp ; 
            temp.real = real + c.real;
            temp.img = img + c.img ; 
            return temp ; 
        }
        complexN operator * (complexN c ){
            complexN temp ; 
            temp.real = real * c.real;
            temp.img = img * c.img ; 
            return temp ; 
        }
        complexN operator - (complexN c ){
            complexN temp ; 
            temp.real = real - c.real;
            temp.img = img - c.img ; 
            return temp ; 
        }

        complexN operator ++ () {
            real++ ; 
            img++; 
        }
        complexN operator ++ (int) { //here int is a dummy variable to differentiate ++var and var++
            ++real ; 
            ++img; 
        }
        complexN operator - (){
            return complexN(-(this.real) ,  -(-this.img)) ;
        }

} ;
int main(){
    complexN c1(2, 4) , c2(3, 7) , c3 , c4 ; 
    c1.print() ;
    c3.print() ;
    c3 = c1 + c2 ; 
    c3.print() ; 
    c4 = c1 + c1*c2 ;  

    
}