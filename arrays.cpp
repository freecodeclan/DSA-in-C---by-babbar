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