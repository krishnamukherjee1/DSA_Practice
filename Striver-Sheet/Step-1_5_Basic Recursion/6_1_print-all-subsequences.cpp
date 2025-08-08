#include<bits/stdc++.h>
using namespace std;

// Using Multiple Recursion Calls
// 1. Fibonacci Series: 0, 1, 1, 2, 3, 5, 8,...
int fib(int n){
    if(n <= 1 )
        return n;
    else 
        return fib(n-1) + fib(n-2);
}
int main(){
    for(int i = 0; i<10; i++) cout<<"\nFib "<<i<<": "<<fib(i);
    return 0;
}