#include<iostream>
using namespace std; 


int main(){
    int a;
    cout<<"Enter the value of a "<<endl; // Taking input from user
    cin>>a;

    if(a>0){
        cout<<"A is positive "<<endl;  // Finding the value of A is positive or negative 
    }    
    else if(a<0){
        cout<<"A is negative "<<endl;
    }
    else{
        cout<<"A is zero "<<endl;
    }
    return 0;
}

//--While Loop
#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n; //-Taking input from user 
    
    cout<<"The value of n is: "<<n <<endl; //- Declaring the value of "n".

    int i = 1;
    while (i<=n)
    {
        cout<<i<<endl;;
        i++;
    }
    
    return 0;
}

//- Find the sum of "n" numbers.
#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n; //- Taking input from user 

    int sum = 0;
    int i = 1;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    cout<<"The sum of n values is: "<<sum<<endl;
    return 0;
}

//- Find the sum of all even numbers 
#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int i = 2;
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i = i+2;
    }
    cout<<"The sum of even number is : "<<sum<<endl;
    return 0;
}

/*- Print all the even numbers
Let n = 10 */
#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int i = 2;
    
    while(i<=n){
        cout<<i<<endl;
        i = i+2;
    }
  
    return 0;
}

/* Tell given number is prime or not
n = 14 */
#include<iostream>
using namespace std; 

int main(){
    int n = 14;
    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"Not prime number for "<<i<<endl;
        }
        else{
            cout<<"Prime number for "<<i<<endl;
        }
        i= i+1;
    }
}