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

/*Creating a function for an array */

#include<iostream>
using namespace std; 

//- Function Created for an array
void printarr(int arr[], int size){
    cout<<"Printing an array "<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int first[10] = {2, 7}; 
    printarr(first, 10);

    int firstsize = sizeof(first)/sizeof(int); //- Used to find the size of an array 
    cout<<"The size of first array is: "<< firstsize << endl;
    
    int second[5] = {2, 4, 6, 8, 10};
    printarr(second, 5);
    
    return 0;
}

/* Find the Minimum and Maximum element of an array */

#include<climits>
#include<iostream> //- header file used for INT_MAX & INT_MIN
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

/* Exapmle - Whether 1 is present in an array */

#include<iostream>
using namespace std; 

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0 ,5, 22, 1};

    cout<<"Enter the element to search: "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Key is present " << endl;
    }
    else{
        cout <<"Key is absent"<< endl;
    }
    
    
    return 0;
}

/*Example - Reverse an array
    
    arr = {2, 6, 8, 10, -1}  
    brr = {4,6,10,-2,-1,12}     */

#include<iostream>
using namespace std; 

//- Using reverse function to reverse an array 
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//- Print function for an array
void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6] = {2, 6, 8, 10, -15,11};
    int brr[5] = {4,6,10,-2,-1};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
  
/* Find sum of elements in given array */

#include <bits/stdc++.h>
using namespace std; 
int sum(int arr[], int n){
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];

        return sum;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[] = {2, 3, 4, 1, 2};
    
    cout << "Sum of given array is " << sum(arr, n);


    
    return 0;
}

/*
Print all the subarrays of given array.
*/
#include<iostream>
using namespace std; 
void subarray(int arr[], int size){
    for(int sp=0; sp < size; sp++){  // sp(starting point)  ep(endpoint)
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


