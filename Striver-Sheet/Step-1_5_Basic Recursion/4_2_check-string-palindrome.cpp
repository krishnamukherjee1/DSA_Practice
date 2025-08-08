#include<bits/stdc++.h>
using namespace std;

// Check whether given string is a palindrome or not.
bool checkPalindrome( string s, int i){
    if( i>= s.size()/2) return true;
    if (s[i] != s[s.size()-1-i])
        return false;
    else return checkPalindrome(s, i+1);
}
int main(){
    
    string s = "madsm";
    string result = (checkPalindrome(s, 0))? " is a palindrome.":"is not a palindrome.";
    cout << s <<" "<<result ;
    
    return 0;
}