#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int s = i-1;
            while(s){
                cout<<"*";
                s = s-1;
        }
        /*int k = 1;
        while(k<=n-i+1){
            cout<<n-j+1;
            k++;
        }*/
        cout<<endl;
        i++;
    }
    return 0;
}