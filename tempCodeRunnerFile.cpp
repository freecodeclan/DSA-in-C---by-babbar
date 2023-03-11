#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    while(i<=n){
        int s = n-i;
        while(s){
            cout<<" ";
            s = s-1;
        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k){
            cout<<k;
            k = k-1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}