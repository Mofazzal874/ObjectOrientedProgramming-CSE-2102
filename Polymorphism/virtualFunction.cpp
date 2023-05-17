//virtual means existing in appearence but not in reality


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
    person obper;
    emp obemp;
    pro obpro;
    person *ptr; 
    ptr = &obper;
    ptr->show(); 
    ptr = &obemp ; 
    ptr->show();
    ptr = &obpro; 
    ptr->show();
    
}