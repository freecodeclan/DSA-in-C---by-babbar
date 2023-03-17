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