#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    
    while(i<=n){
        int j = 1;
        char start = 'A'+n-i;
        while(j<=i){
            cout<<" "<<start;
            start = start+1;
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}