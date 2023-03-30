#include<bits/stdc++.h>
using namespace std; 

int getmin(int num[], int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        mini = min(mini, num[i]);
    }
    return mini;
}

int getmax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int main(){
    int size;
    cout<< "Enter the value for an size of an array: ";
    cin>>size;

    int num[50];

    for(int i = 0; i<size; i++){
        cin>>num[i];
    }
    cout<<"Maximum Value is: " << getmax(num, size) << endl;
    cout<<"Minimum Value is: " << getmin(num, size) << endl;
    
    return 0;
}