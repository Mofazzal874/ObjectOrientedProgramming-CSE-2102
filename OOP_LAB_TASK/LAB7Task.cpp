
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student{
    public:
    string name ; 
    int roll ; 
    double cg ;
    
    void setter(){
        string s ;
        int r ; 
        double c ; 
        cin>>s>>r>>c; 
        name = s; 
        roll = r ; 
        cg = c;
    }
    void getcg(){
        cout<<name<<" "<<roll<<" "<<cg<<endl;
    }
    

};
bool operator <(const student &s1 , const student &s2){
    return s1.cg < s2.cg ;
}


int main(){

    cout<<"Enter the number of students: " ; 
    int n ; cin>>n ; 
    student array[n];
    for(int i =0 ; i < n; i++){
        array[i].setter(); 
        cout<<"\n" ; 

    } 
    priority_queue <student> pq;
    
    for(int i = 0 ; i < n ; i++){
        pq.push(array[i]) ;
    }
    student s = pq.top() ;
    s.getcg();  
      


    
}