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

    int firstsize = sizeof(first)/sizeof(int);
    cout<<"The size of first array is: "<< firstsize << endl;
    
    int second[5] = {2, 4, 6, 8, 10};
    printarr(second, 5);
    
    return 0;
}