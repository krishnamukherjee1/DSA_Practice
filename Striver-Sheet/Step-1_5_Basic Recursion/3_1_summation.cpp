#include<bits/stdc++.h>
using namespace std;

// 1. Parameterized Summation
void summationParameterized(int num, int sum){
    if (num < 1)
    {
        cout<<"\nSum is: "<<sum;
        return; // End-of-Function
    }
    else
    summationParameterized(num - 1 , sum + num);
}

// 1A. Parameterised Summation Returning Value
int linearParameterisedSummation(int num, int sum){
    if ( num < 1 ){
        return sum;
    }
    else{
        sum = sum + num;
        linearParameterisedSummation(num - 1, sum);
    }
    
}


// 2. Functional Summation
int summation(int num){
    if (num == 0)
    return 0;
    else
    return num + summation( num - 1 );
}


//////////////////////////////////////////////////////
int main (){
    
    
    // 1. Parameterized Summation
    summationParameterized(5, 0);
    
    // 1A. Linear Parameterized Summation
    cout<<endl<<linearParameterisedSummation(5, 0);
    
    // 2. Functional Summation
    cout<<endl<<summation(5);
    
    return 0;
}