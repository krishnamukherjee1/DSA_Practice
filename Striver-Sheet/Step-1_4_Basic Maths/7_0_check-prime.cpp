#include <bits/stdc++.h>
using namespace std;
// check prime without flag
bool checkPrimeNoFlag(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            // Number is Divisible / Divisors are present / Not Prime
            return false;
            break;
        }
    }
    // Number is not Divisible / Divisors are not present / Prime
    return true;
}

// check prime with flag
bool checkPrimeFlag(int num)
{
    bool isPrime = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            // Number is Divisible / Divisors are present / Not Prime
            isPrime = false;
            break;
        }
    }
    // Number is not Divisible / Divisors are not present / Prime
    return isPrime;
}

int main()
{
    // No Flag
    cout<<endl<<"--No Flag--"<<endl;
    for (int i = 2; i < 15; i++)
    {
        if (checkPrimeNoFlag(i))
        cout <<i<< " is Prime";
    else
        cout <<i<< " is not Prime";
        cout<<endl;
    }
    
    // Flag
    cout<<endl<<"--Flag--"<<endl;
    for (int i = 2; i < 15; i++)
    {
        if (checkPrimeFlag(i))
        cout <<i<< " is Prime";
    else
        cout <<i<< " is not Prime";
        cout<<endl;
    }
    

    return 0;
}