#pragma once
#include<bits/stdc++.h>
using namespace std;

class cmplex{

public:
    cmplex();
    cmplex(double r, double i) ;
    cmplex operator+(const cmplex& c) ;
    void display();

private:
    double real;
    double img;
};

