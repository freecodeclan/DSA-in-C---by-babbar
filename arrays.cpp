/* Initilization of an array with only 2 values. */
#include<iostream>
using namespace std; 

int main(){
    int arr[15] = {2,7};
    int n = 15; 
    cout<<"Printing an array"<<endl;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}