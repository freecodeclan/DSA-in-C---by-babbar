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
