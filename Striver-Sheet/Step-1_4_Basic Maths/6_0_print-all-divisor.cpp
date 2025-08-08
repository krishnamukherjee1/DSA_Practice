#include<bits/stdc++.h>
using namespace std;
// print all divisors
void printDivisors(int num){
    vector<int> soln;
    int divisor = 0;
    cout<<"Divisors of "<<num<<" : ";
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0){
            soln.push_back(i);
            if(num / i != i)
                soln.push_back(num / i);      
        } 
    }

    sort(soln.begin(), soln.end());
    for ( auto x: soln)
        cout<<x<<" ";
    cout<<endl;
}

int main(){
    for ( int i = 1 ; i <= 36 ; i++)
    printDivisors(i);
    return 0;
}