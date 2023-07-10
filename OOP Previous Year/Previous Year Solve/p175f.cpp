#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class lsb_less{
    public:
    bool const operator()(int x , int y){
        return (x%10)<(y%10) ; 
    }
} ;

int main(){
    set<int , lsb_less> s = {21, 23, 26, 27} ; 
    set<int , lsb_less> :: iterator it1 , it2 ; 
    it1 = find(s.begin() , s.end() , 36) ;
    for(auto it: s) cout<<it<<" " ;
    cout<<endl;  
    it2 = s.find(36) ;
    cout<<*it1<<endl;
    cout<<*it2<<endl;
    
    //this below part is only for testing
    cout<<distance(s.begin() , it1)<<endl;
    cout<<distance(s.begin() , it2)<<endl;
    cout<<*s.end()<<endl;
}

//s.end() iterator returns the size of the set 
// Here , find(s.begin(),s.end(), val) is the std find function and s.find(val) is the find function that is defined in the set data structure.
// thats why output will be_ 
// 4 
// 4
// 4
// 4
// 4
// if you take 21 23 47 27 as set input , 7 is duplicate in the LSB of 47 and 27. 
// So while the set will form the Binary Tree it will take only 47 and 27 wont be taken in the set binary tree.(because you defined the overloaded operator
// to compare based on The LSB digit of the inputs) .
// so in this case , set size is 3.so find(36) will return s.end() . as s.end() is the size of the set , so output will be _ 
// so output will be_ 
// 3
// 3
// 3
// 3
