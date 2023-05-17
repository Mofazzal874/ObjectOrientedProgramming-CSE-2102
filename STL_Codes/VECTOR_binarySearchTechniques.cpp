//2.20.2023
//Mofazzal Hosen 
//KUET
//video source : Rachit Jain - The Best Demo on C++ STL and its Power: sets, vectors, pairs, maps, upper_bounds, and MORE


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool revOrder(int x , int y){
    return x > y ;  
}

int main(){
//------------------------------------------------------C++ STL------------------------------------------------------------
    vector<int> v = {11 , 2 , 3 , 14} ; 

    cout<<v[1]<<endl;//accessing elements 
    sort(v.begin() , v.end()) ;  // sorting              //O(nlogn)
    // output :  2,3 ,11,14
    //now the array is sorted 
    //so we can binary search it in O(logn)



//-----------------------binary_search function---------------------------------------------
    bool present = binary_search(v.begin() , v.end() , 3) ; //returns true or false 
    v.push_back(100) ;
    //2, 3, 14 , 100 
    //lets make this intersting .lets insert 100 couple of times 
    v.push_back(100) ;
    v.push_back(100) ;
    v.push_back(100) ;
    v.push_back(123) ;
    //2, 3, 11, 14 , 100 , 100 , 100 , 100 , 123 



//_______________________Lower_bound_____________________________________________
     vector<int>::iterator it = lower_bound(v.begin() , v.end() , 100) ;  // >=
     //if the num is absent  in the sorted vector , then it will point to 123..(because of greater than section in lower_bound)

//__________________________upper_bound_________________________________________ 
     auto it1 = upper_bound(v.begin() , v.end() , 100) ;                 // > 
     //it will print the first 100 (index number 4) 
     //where as it1 will print 123 .because lowerBound means greater than or equal the given number and upperBound means strictly greater than
     
     cout<<*it<<" "<<*it1<<endl; //100 123
    
    
     //another intersting thing that we can do arithmatic operation in vector iterator in c++ . Like you can 
     //simply add or subtract two iterator.Iterator in vector is random .so you can add them 
     //in O(1) or another words in constant time ; 
     cout<<it1 - it<<endl ;   //output 5          //this will give the distance between these two  iterator 
     
     //so actually you can find the index of an element by simply just subtracting the lower_bound iterator from the 
     //begining iterator v.begin() .this will give you the distance between the first occurance of that element from the begining 
     //implementation 
     cout<<it - v.begin()<<endl; // 4   
     //time complexity O(1)


//__________________________another interesting thing/applications_____________________________________
//you can actually find the frequency of a number using  the binary search algorithm , which will take much less time(O(LogN)) than the traditional loop traversal 
//method, which usually take O(N) in the worst case scenario 
//_________________________implementation_______________________________
    int freq = upper_bound(v.begin() , v.end() , 100) - lower_bound(v.begin() , v.end() , 100) ;
    //simply it is-       freq  = it1 - it ;
    //this is actually distance finding technique which was discussed earlier

    cout<<"Frequency of 100 is : "<<freq<<endl;





//__________________________Reverse / custom sorting with comparator __________________________

//in sorting there is overloaded function which takes comparator in which you can choose in which order 
//you want to sort the vector 
//________________________implementation________________________________________
//   u can actually write the order function as u want .Like if u want to reverse sort -
        //bool revOrder(int x , int y){
            //return x > y ;  
        //}
        sort(v.begin() , v.end() , revOrder) ;
        vector<int> ::iterator it2 ; 
        cout<<"Reverse Order vector\n" ;
        for(it2 = v.begin() ; it2 != v.end() ; it2++){
            cout<<*it2<<" ";
        }
        cout<<"\n" ; 
//---------------------------------Iteration methods---------------------------
//--------------different ways of iterating/printing through a vector ---------
//-----------------------------------------------------------------------------
    //WAY-01
    cout<<"WAY-01\n" ;
        for(int x:v){
            cout<<x<<" " ;
        }
    cout<<"\n";

    //WAY-02
    cout<<"WAY-02\n" ;
    for(auto it: v){
        cout<<it<<" " ;
    }
    cout<<"\n" ;

    //WAY-03
    cout<<"WAY-03(iterating + changing value)\n" ;
    //what if u want to iterate through a vector and also change their value at the same time ??
    //in this case u have to take empercend operator before the iterating variable .Like This --
    for(int &x: v) {     //using reference
            x+=3 ;       //increasing their value by 3 ; 
            cout<<x<<" " ;
    }
    cout<<"\n" ;


//##################################DISADVANTAGES############################################
//binary search only works in sorted array , vector .What if u want to operate on a unsorted array ?
//This will be implemented using set.(discussed later) 






    
}
