#include <iostream>
using namespace std;

int main() {
  
  int n;
  cout<<"enter the value of N = "<< endl;
  cin>>n;
    int count=0;
  // outer loop same jo sbke lye hoti hai
  for (int i = 1; i <= n; i++) {
      
    // print spaces krne ke lye        n-i====n=4,,i=1,,,(4-1)= 3 spaces 
    for (int j = 1; j <= n - i; j++) {
      cout << "*";
    }
    // print stars ke lye naya loop lya jo i tak chalega aur usme count daal dya 
    for (int k = 1; k <= i; k++) {
      
      count=count + 1;
      cout << count ;
    }
    cout<<endl;
  }
}