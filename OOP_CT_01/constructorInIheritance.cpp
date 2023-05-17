#include <iostream>
using namespace std; 

class mother {
public:
mother ()
{ cout << "mother: Constructor - no parameters\n"; }
mother (int a)
{ cout << "mother: Constructor - int parameter\n"; }
~mother ()
{ cout << "mother: Destructor\n"; }
};

class daughter : public mother {
public:
daughter (int a)
{ cout << "daughter: Constructor - int parameter\n\n"; }
~daughter ()
{ cout << "daughter: Destructor\n"; }
};

class son : public mother {
public:
son (int a) : mother (a)
{ cout << "son: Constructor - int parameter\n\n"; }
~son ()
{ cout << "son: Destructor\n"; }
};
int main () {
daughter Hinata (0);
son Naruto (0);
return 0;
}
