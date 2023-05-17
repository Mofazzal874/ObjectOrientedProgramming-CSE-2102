
//Below is an example of Static binding
//No virtual keyword
//for more knowledge :See The cherno youtube channel
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Base
{
public:
Base(){cout<<"Base Constructor Called\n";}
~Base(){cout<<"Base Destructor called\n";}
};
class Derived:public Base
{
private: 
    int* m_array ; 
public:
Derived()
{
    m_array = new int[5] ; //we are taking this array to explain the memory leak in this code 
    cout<<"Derived constructor called\n";}
~Derived(){
    delete m_array ; 
    cout<<"Derived destructor called\n";}
};
int main()
{
Base* b;
b=new Derived;//creating a new object of derived which will first call base constructor (as it is inherited from base) and then its own constructor
delete b;//base destructor call
//But no derived destructor is called . So m_array is not deleted yet . So this can cause memory leak in the programme.
//that why we need virtual destructor.By making the default destructor of the base class virtual , we are saying the programme that there 
//may be a possibility of creating other derived class and their destructor need to be called to free up space ; 
return 0;
}
output:
Base Constructor Called
Derived constructor called
Base Destructor called


//So the code will be :

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Base
{
public:
Base(){cout<<"Base Constructor Called\n";}
virtual ~Base(){cout<<"Base Destructor called\n";}
};
class Derived:public Base
{
public:
Derived(){cout<<"Derived constructor called\n";}
~Derived(){cout<<"Derived destructor called\n";}
};
int main()
{
Base* b;
b=new Derived;
delete b;
return 0;
}
// output:
// Base Constructor Called
// Derived constructor called
// Derived destructor called
// Base Destructor called





