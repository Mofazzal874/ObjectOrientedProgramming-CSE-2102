// Multiplication of two matrix using object oriented concept only
//this solution is unfinished ..Must be corrected

#include<bits/stdc++.h>
using namespace std;

class matrix{
    int arr[2][2]  ;
    public:
    void getValue(vector<vector<int> >& A) ;
    void display() ; 
    void operator * (matrix a) ; 
};


void matrix::getValue(vector<vector<int> >& A)
{
    
    for (int i = 0; i < 2; i++) {
 
        for (int j = 0; j < 2; j++) {
 
            arr[i][j] = A[i][j];
        }
    }
}
void matrix::display()
{
 
    for (int i = 0; i < 2; i++) {
 
        for (int j = 0; j < 2; j++) {
 
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
void matrix::operator * (matrix x){
    
    int mat[2][2];
 
    
    for (int i = 0; i < 2; i++) {
 
        for (int j = 0; j < 2; j++) {
            mat[i][j] = 0;
 
            for (int k = 0; k < 2; k++) {
                mat[i][j] += arr[i][k]
                             * (x.arr[k][j]);
            }
        }
    }
    for (int i = 0; i < 2; i++) {
 
        for (int j = 0; j < 2; j++) {
 
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}
int main(){

    matrix M1 , M2 ; 
    vector<vector<int>> m1 , m2  ; 
    for( int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>m1[i][j] ; 
        }
    }
    for( int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>m2[i][j] ; 
        }
    }

    M1.getValue(m1) ;
    M2.getValue(m2) ;
    M1*M2 ; 



    
    

}