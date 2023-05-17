/*
Early Binding: Compiler knows how many objects and functions should be created.
Dynamic binding: Compiler doesn't know , we will say that in the runtime of the programme
*/
//below is an example of Dynamic Binding
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class person{
    public:
    virtual void show(){
        cout<<"class person\n" ;
    }
} ;
class emp: public person{
    public:
    void show(){
        cout<<"class emp\n" ;
    }
} ;
class pro: public person{
    public:
    void show(){
        cout<<"class pro\n" ;
    }
};
int main(){
    person *ptr[5] ; 
    int op , i; 
    cout<<"Enter choice\n1-Person Class\n 2.Employee class\n 3.Programmer class\n" ; 
     
    for(int i = 0 ; i< 5 ;i++){
        cout<<"Which class object is create: "; 
        cin>>op; 
        if(op == 1) ptr[i] = new person; 
        else if(op == 2) ptr[i] = new emp ; 
        else if(op == 3) ptr[i] = new pro ; 
    }
    for(int i = 0 ; i< 5; i++){
        ptr[i]->show();
    }
}
//Here object is created in the Runtime of the programme