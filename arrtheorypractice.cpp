/* Insertion in Array */

#include<iostream>
using namespace std; 

int main(){
    int arr[5] = {};

     arr[0] = 2;
     arr[1] = 4;
     arr[2] = 6;
     arr[3] = 8;
     arr[4] = 10;

    for (int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }   
    return 0;
}

/* */
#include<iostream>
using namespace std; 

int main(){
    int n = 15;
    int arr[15] = {1};
    
    for(int i=1; i<n; i++){
        cout << arr[i] + 1 <<" ";
    }
    return 0;
}