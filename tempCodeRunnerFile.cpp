#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    } 
    return 0;
}