#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class point2d{

    protected:
    double a , b ;
    public:
    point2d(){
        a = 0.0 ; 
        b =0.0; 
    } 
    point2d(double x, double y){
        a = x; 
        b = y ; 

    }
    virtual void cal_distance(point2d& p ){
        cout<<sqrt(((a-p.a)*(a-p.a)+(b-p.b)*(b-p.b)))<<endl;
    }

};
class point3d: public point2d{
    protected:
    double c; 
    public:
    point3d(){
        a = 0.0 ; 
        b =0.0;
        c = 0.0 ;
    } 
    point3d(double x, double y , double z){
        a = x; 
        b = y ; 
        c = z ; 

    }
    void cal_distance(point3d& p ){
        cout<<sqrt(((a-p.a)*(a-p.a)+(b-p.b)*(b-p.b) + (c-p.c)*(c-p.c)))<<endl;
    }

};

int main(){


    point2d p(1,2) , q(2,3) ; 
    point3d r(3,4,5) , s(5,6,7) ;
    point2d* baseptr ; 
    baseptr = &p ; 
    baseptr->cal_distance(q) ; 
    baseptr= &r ;

    ((point3d*)baseptr)->cal_distance(s) ; //Here we casting basepointer to derived class pointer . 
                                            //Why??because baseptr can access all the members from the base class 
                                            //but it can not directly access the members which are defined in derived class.
                                            

    
}