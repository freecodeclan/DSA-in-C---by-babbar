#include<iostream>
using namespace std; 
void subarray(int arr[], int size){
    for(int sp=0; sp < size; sp++){
        for(int ep = sp; ep <size; ep++){
            for(int i = sp; i<=ep; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    subarray(arr,n);
    
    return 0;
}