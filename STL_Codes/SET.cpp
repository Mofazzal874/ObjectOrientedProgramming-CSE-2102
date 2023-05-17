//Mofazzal Hosen
//2.20.2023
//KUET
//video souce : Rachit Jain 


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



//-----------------Introduction to SET STL---------------------
//most of the times we have to use the main array (not the sorted one) , so can't sort as our wish..But we also want to reduce 
//time complexity.that means we want to use all the functions which we used before in the previous stl codes like upper_bound /lower_bound in O(logn) time.
//for this we can use the SET in STL , which is disscussed below . 


void sett(){
    //_________________SET________________
//set sorted the array in ascending order by default . every inserting operation takes O(logn) , n is the size of the set .
//set is definitely more powerful than vectors as most of its operation takes O(logN) time complexity in the worse case scenario. 


    set<int> s; 
    s.insert(1) ; 
    s.insert(2) ; 
    s.insert(-1) ; 
    s.insert(-10) ; 
    s.insert(3) ; 
    s.erase(3) ; //erasing also takes O(logn) 
    for(int x : s){
        cout<<x<<" "; 
    }
    cout<<endl;
    // output: -10 -1 1 2 
//___________________searching any elements in a set____________

     auto it  = s.find(-1) ; 
     if(it == s.end()) cout<<"Not present\n" ;
     else cout<<"Present\n" ;
     //returns an iterator to the element , not index ;  
     //if num is not found in the set , it will return iterator the s.end() 

//___________finding index/upper_bound/lower_bound______________
    //as set class is already sorted , it doesn't need starting and ending iterator in lower_bound and upper_bound function as parameters 
    auto it1 = s.lower_bound(-1); // >= 
    cout<<*it1<<endl  ;//output: -1 

    auto it2 = s.upper_bound(0) ; // >
    cout<<*it2<<endl; //output: 1 

    auto it3 = s.upper_bound(2) ;//doesn't exist .so returns s.end() 
    if(it3 == s.end()) cout<<"Not found\n" ;
    

  
}

int main(){
    sett() ; 

}
