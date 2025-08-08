#include<bits/stdc++.h>
using namespace std;

// Linear Recursion for printing N-to-1.
void linearRecursion(int start,int num){
    
    if ( start > num )
    return;
    else{
        // Forward Pass
        cout<<"Forward pass: "<<num<<endl;
        linearRecursion(start, num - 1);
    }
}


// Backtrack Recursion for printing N-to-1.
void backRecursion(int start, int num){
    if ( start > num )
        return;
    else{
        backRecursion(start + 1 , num);
        // Backtrack
        cout<<"Backtrack: "<<start<<"\n";
    }
}


int main(){
    linearRecursion(1, 10);
    backRecursion(1, 10);
}