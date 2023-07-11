#include "ComplexNumber.h"

cmplex::cmplex(){
    real = 0.0 ;
    img = 0.0 ;  
}

cmplex:: cmplex(double r , double i){
    real = r; 
    img = i ; 
}

cmplex cmplex ::operator+(const cmplex& c) { //const means we are only using the value of the taken object,we don't need
                                            //to modify it.
    return cmplex(real+c.real , img+c.img) ; 
}
void cmplex:: display(){
    cout<<real<<"+"<<img<<"i" ;
}