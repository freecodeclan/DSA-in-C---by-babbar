#include<bits/stdc++.h>
using namespace std;
int largestRowSum(int arr[][3], int i, int j){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}
int main(){
    int arr[3][3];
    cout << "Enter the elements of an array" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the 2D Array" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";       
            }
            cout << endl;
        }
        int ansIndex = largestRowSum(arr, 3, 3);
        cout << "Max row at index " << ansIndex << endl;
}