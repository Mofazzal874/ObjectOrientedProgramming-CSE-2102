#include<bits/stdc++.h>
#include "ComplexNumber.h"
using namespace std; 

template<typename T>
class Matrix{
    T mat[50][50] ; //taking large size array .you can alos take pointer type to take arbitrary size 
    int rowsize ; 
    public:
    Matrix(){
        mat[5][5] ={0} ; 
        rowsize = 5 ; //if you dont give any row size of the matrix , by defauld it will be 5x5 matrix with all element to 0 ; 
    }
    Matrix(int a[][5] , int r){
        for(int i = 0 ; i < r; i++){
            for(int j = 0 ; j < 5 ; j++){
                mat[i][j] = a[i][j] ; 
            } 
        }
        rowsize = r; 
    }
    Matrix operator+(Matrix& m){
        Matrix temp ;
        for(int i = 0 ; i < m.rowsize; i++){
            for(int j = 0 ; j < 5 ; j++){
                    temp.mat[i][j] = mat[i][j] + m.mat[i][j] ; 
            }
        }
        temp.rowsize = m.rowsize ; 
        return temp ; 
    }
    void display(){
        for(int i = 0 ; i < rowsize ; i++){
            for(int j = 0 ; j < 5 ; j++){
                cout<<mat[i][j]<<" " ; 
            }
            cout<<endl;
        }

    }


};


int main() {


    cout<<"Enter Row  Size of the matrix: (col size is always 5): " ; 
    int r ; cin>>r; 

    int a[r][5] , b[r][5] ; //to add two matrix , row and col should be same ; 



    cout<<"Enter first matrix:"<<endl;
    //Matrix 1
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin>>a[i][j] ; 
        }
    }

    cout<<"Enter 2nd matrix: " <<endl;; 
    //matrix 2 
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin>>b[i][j] ; 
        }
    }

    Matrix<double> m1(a, r) ; 
    Matrix<double> m2(b,r) ;
    cout<<"addition matrix::"<<endl; 
    Matrix<double> m3 = m1+ m2 ; 
    m3.display() ; 
}

