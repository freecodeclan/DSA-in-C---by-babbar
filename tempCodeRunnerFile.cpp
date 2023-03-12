#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i = 0;
    while(i<n){
        int j = 1;
        while(j<n-i+1){
            cout<<j;
            j++;
        }
        int s = 2*i;
            while(s){
                cout<<"*";
                s = s-1;
        }
        int k = n;
        while(k>i){
            cout<<k-i;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}