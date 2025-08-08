#include<bits/stdc++.h>
using namespace std;
/*
We may encounter a problem where the maximum array element may be very large like 109. In that case, theoretically, we should declare an array of size 109+1. But we cannot do so
+-----------------------+-------------------------------+-------------------------------+
|   Array Declaration   |   Max Size ( Integer Type )   |   Max Size ( Boolean Type )   |
+-----------------------+-------------------------------+-------------------------------+
|  Inside Main Function |   10 ^ 6                      |   10 ^ 7                      |
|  Globally             |   10 ^ 7                      |   10 ^ 8                      |
+-----------------------+-------------------------------+-------------------------------+

To encounter the problem, we use map / unordered-map as it takes a little less memory.

Map -> strores values in sorted order.

+---------------------------------------------------------------------------------------+
+                                         Map                                           +
+---------------------------------------------------------------------------------------+
+                                    Time Complexity                                    +
+-----------------------+-------------------------------+-------------------------------+
|   Case                |   Storing                     |   Fetching                    |
+---------------------------------------------------------------------------------------+
+---------------------------------------------------------------------------------------+
|  Avg Case             |   O ( log n )                 |   O ( log n )                 |
+-----------------------+-------------------------------+-------------------------------+
|  Best Case            |   O ( log n )                 |   O ( log n )                 |
+-----------------------+-------------------------------+-------------------------------+
|  Worst Case           |   O ( log n )                 |   O ( log n )                 |
+-----------------------+-------------------------------+-------------------------------+


+---------------------------------------------------------------------------------------+
+                                     Unordered Map                                     +
+---------------------------------------------------------------------------------------+
+                                    Time Complexity                                    +
+-----------------------+-------------------------------+-------------------------------+
|   Case                |   Storing                     |   Fetching                    |
+---------------------------------------------------------------------------------------+
+---------------------------------------------------------------------------------------+
|  Avg Case             |   O ( 1 )                     |   O ( 1 )                     |
+-----------------------+-------------------------------+-------------------------------+
|  Best Case            |   O ( 1 )                     |   O ( 1 )                     |
+-----------------------+-------------------------------+-------------------------------+
|  Worst Case           |   O ( n )                     |   O ( n )                     |
+-----------------------+-------------------------------+-------------------------------+
*/




// 3. Hashing for charecter array


int main(){

    int arr1[5] = { 1, 2, 2, 3, 4};
    int arr2[5] = { 1, 2, 5, 3, 4};
    int arr3[5] = { 1, 2, 2, 3, 4};
    string s = "Krishna Kumar Kunnath";
    
    
    // Mapping - I
    // Precomputation
    map<int, int> map1;
    
    for (int i = 0; i < 5; i++)
    map1[arr1[i]]++;

    
    // Number Hashing
    cout<<"\nNumber Hashing";
    
    // Fetching
    cout<<"\nNumber of Occurrences: "<<map1[1];
    cout<<"\nNumber of Occurrences: "<<map1[2];
    cout<<"\nNumber of Occurrences: "<<map1[3];
    // Iterate over entire map
    for ( auto i : map1)
        cout<<i.first<<" --> "<<i.second<<endl;
        
    // Character / String Maping - II
    cout<<"\nCharacter Hashing";
    // precompute
    map<char, int> map2;
    for (int i = 0; i < s.size(); i++)
    map2[s[i]]++;
    
    // Fetching
    cout<<"\nNumber of Occurrences: K --> "<<map2['K'];
    cout<<"\nNumber of Occurrences: n --> "<<map2['n'];
    cout<<"\nNumber of Occurrences: a --> "<<map2['a'];
    cout<<"\nNumber of Occurrences: r --> "<<map2['r'];
    
    cout<<"\nIterate over Entire map\n";
    // Iterate over entire map
    for ( auto i : map2)
        cout<<i.first<<" --> "<<i.second<<endl;
            
                return 0;
}
