#include<bits/stdc++.h>
using namespace std;
// Function to find maximum element in 2D Array
int maximumInArray(int arr[][3], int r, int c){
    int maxi = INT_MIN;
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            if(arr[r][c] > maxi){
                maxi = arr[r][c];
            }
        }
    } return maxi; 
}
// Taking input from user
int main(){
    int arr[3][3];
    cout << "Enter the elements of array:  " << endl;
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            cin >> arr[r][c];
        }
    }
    // Printing an array 
    cout << "Printing an array " << endl;
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
    // Calling an function 
    int maximumElement = maximumInArray(arr,3,3);
    cout << "The maximum element in array is: " << maximumElement << endl;
}