#include<bits/stdc++.h>
using namespace std;

// Linear Recursion for printing something N times.
void linearRecursion(int start,int num){
    if ( start > num )
    return;
    else{
        cout<<"Hello "<<start++<<endl;
        linearRecursion(start, num);
    }
}


// Backtrack Recursion for printing something N times.
void backRecursion(int start, int num){
    if ( start > num )
        return;
    else{
        backRecursion(start, num - 1);
        cout<<"While Returning "<<num<<"\n";

    }
}

// Combined
void Recursion(int num){
    if ( num == 0 )
        return;
    else{
        cout<<"Linear Recursion "<<num<<"\n";
        Recursion(num - 1);
        cout<<"While Backtrack "<<num<<"\n";
    }
}

int main(){
    linearRecursion(1, 10);
    backRecursion(1, 10);
    Recursion(10);
}