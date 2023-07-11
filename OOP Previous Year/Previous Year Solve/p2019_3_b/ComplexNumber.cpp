#include "ComplexNumber.h"

cmplex::cmplex(){
    real = 0 ;
    img = 0; 
}

cmplex:: cmplex(int r , int i){
    real = r; 
    img = i ; 
}
cmplex cmplex ::operator+(cmplex& c) {

    return cmplex(real+c.real , img+c.img) ; 
}

istream& operator>>(istream& in , cmplex& c){
    in>>c.real>>c.img ; 
    return in ; 
}

ostream& operator<<(ostream& out , cmplex& c) {
    out<<c.real<<"+i"<<c.img; 
    return out; 
}