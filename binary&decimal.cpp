/* Example to convert decimal number into binary number */

#include<iostream>
#include<math.h> //- Used to include maths formulas 
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){
        int bit = n & 1; // used to find last bit of any number

        ans = (bit*pow(10, i)) + ans; // 

        n = n >> 1; // right shift to n by 1 means dividing n by 2.
        i++;
    }
    cout<<"Answer is "<< ans <<endl;
    
   
}

/* Example to convert any binary number into decimal number */

#include<iostream>
#include<math.h>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i = 0;
    int ans = 0;

    while(n != 0){
        int digit = n % 10; //- use to break any number into digit 
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout<<"Answer is "<< ans <<endl;
   
}