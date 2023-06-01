#include<bits/stdc++.h>
using namespace std;

// To print row wise sum
void printSum(int arr[][3], int i, int j){
    cout << "printing the sum " << endl; 
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }   
}
int main(){
    int arr[3][3];

    cout << "Enter the elements of an array" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3, 3);
}