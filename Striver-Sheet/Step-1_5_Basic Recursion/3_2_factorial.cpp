#include<bits/stdc++.h>
using namespace std;

// 1. Parameterized Factorial
void factorialParameter(int num, int sum){
    if (num < 1)
    {
        cout<<"\nFactorial is: "<<sum;
        return; // End-of-Function
    }
    else
    factorialParameter(num - 1 , sum * num);
}

// 1A. Parameterised Factorial with Returning Value
int returnParamFact(int num, int sum){
    if ( num < 1 ){
        return sum;
    }
    else{
        sum = sum * num;
        returnParamFact(num - 1, sum);
    }
    
}


// 2. Functional Factorial
int factorialFunctional(int num){
    if (num == 1)
    return 1;
    else
    return num * factorialFunctional( num - 1 );
}



int main (){
    
    
    // 1. Parameterized Factorial
    factorialParameter(5, 1);
    
    // 1A. Returning Parameterized Factorial
    cout<<endl<<returnParamFact(5, 1);
    
    // 2. Functional Factorial
    cout<<endl<<factorialFunctional(5);
    
    return 0;
}