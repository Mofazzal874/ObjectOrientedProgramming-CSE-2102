#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include<bits/stdc++.h>
using namespace std; 

class cmplex{

public:
    int real;
    int img;
    cmplex();
    cmplex(int r, int i) ;
    cmplex operator+(cmplex& c) ; 
    friend istream& operator>>(istream& in , cmplex& c) ; 
    friend ostream& operator<<(ostream& out , cmplex& c) ;  
};

#endif

