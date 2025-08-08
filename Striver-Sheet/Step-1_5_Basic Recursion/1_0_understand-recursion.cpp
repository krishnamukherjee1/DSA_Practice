#include<bits/stdc++.h>
using namespace std;
void recurse1 ( int n){
    if ( n == 5 )
        return;
    else {
        cout<<n<<" Before R1\n";
        recurse1(n+1);
        cout<<n<<" After R1\n";
    }
}

int recurse2 ( int n){
    if ( n == 5 )
        return 0;
    else {
        cout<<n<<" Before R2\n";
        return recurse2(n+1);
        cout<<n<<" After R2\n";
    }
}

int recurse3 ( int n){
    if ( n == 5 )
        return -1;
    else {
        cout<<n<<" Before R3\n";
        return recurse3(n+1);
        cout<<n<<" After R3\n";
    }
}

// Re 1. Introduction to Recursion | Recursion Tree | Stack Space
int main(){
    recurse1(1);
    recurse2(1);
    recurse3(1);
    return 0;
}