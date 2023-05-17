**Theory**
In polymorphic languages , polymorphism is achieved by the use of class hierarchies , virtual functions and base class pointers. In this approach , a  base class pointer can be used to point to objects of the base class and to any object derived from that base class.Thus , it is always not possible to know in advance what type of object will be pointed to by the base class pointer at any given moment.But this determination can be made at run time using Run Time Type Information(RTTI).

**Dynamic Cast:**
dynamic_cast<target_type>(the expression being cast into the new type); 

- target-type: must be a pointer or reference type. 
- expression: must evaluate to a pointer or reference.


so dynamic cast can be used to cast one type of pointer into another or one type of reference into another.


