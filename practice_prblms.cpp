/*Example 1 - Reverse the number 
    n = 123. */

#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        ans = (ans * 10) + digit;
        n = n/10;
    }
    cout<<"Reverse of 123 is: "<< ans <<endl;

    return 0;
}

/* Example - Complement of Base 10 integer.
The compliment of an integer is the integer you get when you flip all the 0's to 1's 
and all the 1's to 0's in the binary representation. */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int m = n;
    int mask = 0;
    
    if(n == 0){
        return 1;
    }
    
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    cout<<ans;
}
