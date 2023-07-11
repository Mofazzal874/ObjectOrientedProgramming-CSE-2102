
#include<bits/stdc++.h>
#include "ComplexNumber.h"

using namespace std; 

template<typename T>
class Matrix{
    T mat[2][2] ;   
    public:

    friend istream& operator>>(istream& in , Matrix& m){
        for(int i = 0 ; i < 2; i++){
            for(int j = 0 ; j < 2 ; j++){
                in>>m.mat[i][j] ;   
            } 
        }
        return in ; 

    }

    friend ostream& operator<<(ostream& out, Matrix &m){

        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                out<<m.mat[i][j]<<" " ; 
            }
            out<<endl;
        }
        return out ; 

    }
    Matrix operator+(Matrix &m) ; 
    
    


};

template <typename T>
Matrix<T> Matrix<T>:: operator+(Matrix<T> &m){
        Matrix<T> temp ;
        for(int i = 0 ; i < 2; i++){
            for(int j = 0 ; j < 2 ; j++){
                    temp.mat[i][j] = mat[i][j] + m.mat[i][j] ; 
            }
        } 
        return temp ; 
    }


int main() {

    Matrix<cmplex> m1 , m2 ,m3 ; 
    cout<<"Enter Matrix 1: "<<endl; ; 
    cin>>m1 ; 
    cout<<"Enter 2nd matrix: " <<endl;
    cin>>m2 ; 
    cout<<"addition matrix::"<<endl; 
    m3 = m1 + m2 ; 
    cout<<m3 ; 
    return 0 ; 
}

