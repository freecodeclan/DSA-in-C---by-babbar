/* Using Switch statement make an small calculator */
#include<iostream>
using namespace std; 

int main(){
    int a, b;
    
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform "<<endl;
    cin>>op;

    switch(op)
    {
        case '+' : cout << (a+b) <<endl;
                   break;

        case '-' : cout << (a-b) <<endl;
                   break;

        case '*' : cout << (a*b) <<endl;
                   break;

        case '/' : cout << (a/b) <<endl;
                   break;

        case '%' : cout << (a%b) <<endl;
                   break;

        default : cout << "Please Enter a valid operation" << endl;
    }
    return 0;
}

/* Example to find the value of nCr */

#include<iostream>
using namespace std; 

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int nume = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    return nume/deno;
}

int main(){
    int n, r;
    cin>> n >> r;

    cout<<"Answer is " << nCr(n,r) <<endl;
}

/* Create function and print counting till n */

#include<iostream>
using namespace std;

void printCounting(int n){

    for(int i = 1; i<=n; i++){
        cout<< i << " ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    printCounting(n);
    
    return 0;
}

/* Create function to find the number is prime or not. */

#include<iostream>
using namespace std; 
bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(isPrime(n)){
        
        cout<<"Is a prime number. "<<endl;
}
    else{
        cout<<"Is not a prime number. "<<endl;
    }        
}