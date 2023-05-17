#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVec (vector<int> &v ){
   cout<<"size: "<<v.size()<<endl;
   for( int i = 0 ; i < v.size() ; i++){
      cout<<v[i]<<" ";
   }
   cout<<endl;
}

int main(){
 /*  //-------------------------vector of pairs--------------------
    
    vector<pair<int, int>> vp = {{1,2} , {2,3} , {3,4} , {4,5} , {5,6}} ;//every element is a pair
    //taking input
    //cin>>a>>b ; 
    //vp.push_back({a,b}) ; 
     for(int  i = 0 ; i < 5 ; i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
     }

   //---------------------Array of vectors/2D array-------------------
   int n ; cin>>n ; 
   vector<int> v[n] ; //n vectors of size 0 ;
   
   for(int i = 0 ; i<n ; i++){
      int size ; cin>>size ;//size for every vector 
      for( int j = 0 ; j < size; j++){
         int a; cin>>a; 
         v[i].push_back(a) ; 
      }
      
   }
   for(int i = 0 ; i < n ; i++){
      printVec(v[i]) ;
   }
   //accessing 
   cout<<"v[0][0]: "<<v[0][0]<<endl;
   cout<<"v[1][1]: "<<v[1][1]<<endl;
   

*/

   //-------------------------Vector of Vectors/2D dynamic array-------------
   vector<vector<int>> vv ;

   //row input 
   int row ; cin>>row ; 
   for( int  i = 0 ; i < row ; i++){
      vector<int> temp ; //we are taking it to push vectors into every row ; 
      int rowsize ; cin>>rowsize ; 
      for(int i =0 ; i <  rowsize ; i++){
         int a ; cin>>a ; 
            temp.push_back(a) ; 
      }
      vv.push_back(temp) ;  
   }

   for( int i = 0 ; i < vv.size() ; i++){
      for( int j = 0 ; j < vv[i].size();j++){
         cout<<vv[i][j]<<" "; 
      }
      cout<<endl;
   }
   

    
}