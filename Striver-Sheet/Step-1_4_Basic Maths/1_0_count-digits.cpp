#include<bits/stdc++.h>
using namespace std;

// Extract Digits
void extractDigits(int number){
    int count = 0;
    int digit;
    cout<<"\nDigits are : ";
    while (number!=0)
    {
        digit = number % 10;
        cout<<"\t"<<digit;
        number = number / 10;
        count++;
    }
    
}
// Count Digits
void countDigits(int number){
    int count = 0;
    while (number!=0)
    {
        count++;
        number = number / 10;
    }
    cout<<"\nDigit count: "<<count;
}

int main(){

    countDigits(56);
    extractDigits(56);
    cout<<"\n";

    countDigits(567);
    extractDigits(567);
    cout<<"\n";
    
    countDigits(5678);
    extractDigits(5678);
    cout<<"\n";
    
    countDigits(56789);
    extractDigits(56789);
    cout<<"\n";
    return 0;
}