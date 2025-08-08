#include <bits/stdc++.h>
using namespace std;

// Count Digits
int countDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    return count;
}

// sum of digits raised to the power as number of digits
int sum(int number, int count)
{
    int digit, exponent, sumOfPower = 0;
    while (number > 0)
    {
        digit = number % 10;
        exponent = pow(digit, count);
        sumOfPower = sumOfPower + exponent;
        number = number / 10;
    }
    return sumOfPower;
}

// Check Armstrong Number
void checkArmstrongNumber(int n)
{
    // Check if given number is 1 digit or 2 digit
    if (0 < n && n < 9)
        cout << "\tArmstrong Number";
    else if (10 < n && n < 151)
        cout << "\tNot a Armstrong Number";
    cout << "\n";

    int digits = countDigits(n);
    // When digit > 2
    int sumOfPower = sum(n, digits);
    cout << "\nNumber is : " << n ;
    cout << "\nSum of power : " << sumOfPower;
    if (sumOfPower == n)
        cout << "\nArmstrong Number";
    else
        cout << "\nNot a Armstrong Number";
}

int main()
{
    checkArmstrongNumber(153);
    checkArmstrongNumber(370);
    checkArmstrongNumber(371);
    checkArmstrongNumber(407);
    checkArmstrongNumber(1634);

    return 0;
}