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

    cout<< (++i) <<endl; // Pre Increment
    cout<< (i++) <<endl; // Post increment 
    cout<< (i--) <<endl; // Post decrement  
    cout<< (--i) <<endl; // Pre decrement 
    return 0;
}

/* Example - Print counting from 1 to n numbers using for loop. */

#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
    return 0;
}

/* Example - Calculate the sum of n numbers using for loop */

#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;
}

/* Example - Print Fibonacci Series of n numbers using for loop */

#include<iostream>
using namespace std; 

int main(){
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=n; i++){
        int sum = a+b;
        cout<<sum<<" ";

        a=b;
        b=sum;
    }
    
    return 0;
}



