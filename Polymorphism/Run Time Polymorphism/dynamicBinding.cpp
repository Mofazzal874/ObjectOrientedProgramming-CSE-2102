//dynamic binding
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class user{
    public:
    virtual void print(){
        cout<<"I am a user"<<endl;
    }

} ;
class superUser: public user{
    public:
    void print(){
        cout<<"I am a super user"<<endl;
    }

};
int main(){
     user U; 
     superUser SU;
     list<user*> users; //list of pointers to user objects
        users.push_back(&U);
        users.push_back(&SU); //pushing the address of superUer object to a list of type user* is possible , because 
                             //deepdown superUser is inherited from user class.So it is a user object. 
        for(user* u: users){
            u->print(); //For every call to print() function,the programme will dynamically bind( in the 
                        //runtime) the appropriate function related to it.(whether it is user or superUser) 
                        //  this is dynamic binding. The function to be called is decided at runtime.
                        //This programme doesn't know (while compiling time) which object the user* is pointing to.
                        //So it decides at runtime which function to call.
        }
    return 0;
    
}
//Output:
// I am a user
// I am a super user