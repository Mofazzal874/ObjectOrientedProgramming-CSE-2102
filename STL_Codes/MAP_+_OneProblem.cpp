#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void powerOfSTL(){
/*
//problem statement:
get a set of interval like -
    [2,3] 
    [30,40] 
    [100,400]
    and take a number from the user called n. 
    output in which interval the number is in .if the number 
    doesn't satifies any of the interval , then print Out Of Interval
    Otherwise , print the interval 
    note: No interval should intercept with other interval 
*/
     set<pair<int,int>>s ; 
    for(int i = 1 ; i <= 5; i++){
        int a  , b ; cin>>a>>b ; 
        s.insert({a , b}) ;
    }
    int point ; cin>>point ; 
    auto it = s.upper_bound({point , INT_MAX}) ;
    if(it == s.begin()){
        cout<<"out of interval\n" ; 
        return 0 ; 
    }
    it-- ; 
    pair<int , int> current = *it ; 
    if( current.first <= point && current.second>= point) cout<<current.first<<" "<<current.second<<endl;
    else cout<<"out of boundaries\n" ;

}

int main(){
//----------------------MAP stl------------------

    //powetOfSTL() ;  
//------------------------unordered map/orderded map -----------------------
    map<char , int> m ; 
    unordered_map<char ,int> u ; 
    string s = "Mofazzal Hosen" ;
    for(char c : s) m[c]++ ; // ordered map :O(NlogN) ; n is the size of the ordered map
    
    for(char c : s) u[c]++ ; //unordered_map : O(N) 
    //so unoderded map is faster than map for every add or delete operation 
//______________add/delete_________________
    //add(key, value) - log(n) for ordered map 
    //add(key , value) - O(1) for unorderd map 
    //erase(key) - logn for ordered maps
    //erase(key) - O(1) for Unordered maps 
    //why unordered map takes less time???
    //because when char c is inserted into unordered map , it transferred into a hash function .As hash function is a 
    //mathematical function , it takes constant time O(1) to calculate 
    //On the other hand , Ordered map works with BST(binary search Tree) based on keys. so every time you insert an element , it search the map and put 
    //it in sorted way . so for N number of keys , Time complexity will be O(NlogN) 


    //Note: Set also works in this way.And actually set is a subset of map 
    //-------------------------------------------Other Functions(common for almost all container)---------------------
    //1.   auto it = mp.find(key) ;   //Time complexity O(logN)
    //if the key is not found , then it returns mp.end() 

    //2.   mp.erase(key) or you can input the iterator like  mp.erase(it)  // O(logN)
    //3.   mp.clear()  -- it will clear the map 




    //==========================Time complexity for map=======================
    //m[key] = "value" ; //O(logN)
    //but if the key is a string then it s.size()*O(logN) will the time complexity .Because map compare the key value with binary search and sort them.But 
    //to compare two string s.size() will also needed..Thats why bigger string will take much time

}




