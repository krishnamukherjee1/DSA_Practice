#include<bits/stdc++.h>
using namespace std;

// Reverse number
void reverseNumber(int number){
    int digit, reverse = 0;
    cout<<"\nNumber is: "<<number;
    while (number!=0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    cout<<"\nReverse is: "<<reverse;
}

int main(){

    reverseNumber(567);
    reverseNumber(56789);
    reverseNumber(10000);
    reverseNumber(10101010);
    cout<<"\n";
    return 0;
}