#include<bits/stdc++.h>
using namespace std;
// Reverse number
int reverseNumber(int number){
    int digit, reverse = 0;
    // cout<<"\nNumber is: "<<number;
    while (number!=0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    return reverse;
}

// Check Palindrome Number using reverse
void checkPalindromeNumber(int n){
    int rev = reverseNumber(n);
    cout<<"\nReverse is : "<<rev;
    cout<<"\nNumber is : "<<n<<"\n";
    if(rev == n)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    cout<<"\n";
}


int main(){
    checkPalindromeNumber(565);
    checkPalindromeNumber(101);
    checkPalindromeNumber(10);

    return 0;
}