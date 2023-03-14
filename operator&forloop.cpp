//- Example of bitwise operator 

#include<iostream>
using namespace std; 

int main(){
    int a = 2;
    int b = 6;

    cout<<" a&b "<< (a&b) << endl;
    cout<<" a|b "<< (a|b) << endl;
    cout<<" ~a "<< (~a) << endl;
    cout<<" a^b "<< (a^b) << endl;
   

    cout<< (17>>1) <<endl; //- right shift 17 by 1 is 17/2
    cout<< (21>>2) <<endl; //- right shift 21 by 2 is 21/2*2
    cout<< (17<<1) <<endl; //- left shift 17 by 1 is 17*2
    cout<< (21<<2) <<endl; //- left shift 21 by 2 is 21*4

}

//- Example for Pre & Post Increment/Decrement 

#include<iostream>
using namespace std; 

int main(){
    int i = 7;

    cout<< (++i) <<endl; // Post Increment
    cout<< (i++) <<endl; // Pre increment 
    cout<< (i--) <<endl; // Post decrement  
    cout<< (--i) <<endl; // Pre decrement 
    return 0;
}