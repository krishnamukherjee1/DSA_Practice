#include<bits/stdc++.h>
using namespace std;

// Printing array
void printArray ( int arr[], int size){
    cout<<"\nPrinting Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

// 1. Reverse an Array using Recursion
// Method - I
void reverseArray1(int arr[], int first, int last){
    if(first>=last)
        return;
    else{
        swap(arr[first], arr[last - 1]);
        reverseArray1(arr, first + 1,last - 1);
    }
}

// Method -II
void reverseArray2(int arr[], int i, int size){
    if(i>= size/2)
        return;
    else{
        swap(arr[i], arr[size-1-i]);
        reverseArray2(arr, i+1, size);
    }
}

int main(){

    int arr[5]= {1, 3, 2, 5, 4};

    // Method - 1
    printArray(arr, 5);
    reverseArray1(arr, 0 , 5);
    printArray(arr, 5);
    
    // Method - 2
    printArray(arr, 5);
    reverseArray2(arr, 0 , 5);
    printArray(arr, 5);
    
    return 0;
}