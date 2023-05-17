#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//----------------------------insertion----------------------
    pair <int ,string>  p;
    //insertion
    p = make_pair(2, "abc") ;
    p = {2 , "abcd"} ;
    //pair copy
    pair <int , string> p1 = p ; //datatypes must be same
    cout<<p.first<<" "<<p.second<<endl; 
    //reference using 
    pair<int , string> &p2 = p ; //now if you change something in p2 , that value will also 
                                //change in p
    p2.first = 3 ; 
    cout<<p.first<<" "<<p.second<<endl;//p also changed
 //pair is used to make relation between two container
 //----------------array of pair----------------
 // you have like two array a[] = {1 ,2 , 3} , b[] = { 2, 3, 4} 
//you can relate them with pair 
        pair<int, int> p_array[3] ; //pair of size 
        p_array[0] = {1,2} ; 
        p_array[1] = {2,3} ;
        p_array[2] = {3,4} ;
        
        swap(p_array[0] , p_array[2]) ;
        for(int i = 0 ; i < 3 ; i++){
            cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
        }
        //taking input 
        //cin>>p.first<<p.second





//__________________________________________________VECTOR_____________________________________
                  //declaration
            vector<int> v(10, 3) ; //size = 10 , with initialization of 3 in every index 
            vector<int> v2 = v ; //copying   time complexity O(n)





    
}