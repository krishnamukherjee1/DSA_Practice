#include <bits/stdc++.h>
using namespace std;

// Learn Basic Hashing
// Problem : Counting Number of Occurences where array is unsorted
/*
1.  Brute Force - Linear Method
                [ O( n X m ) ]
                    where   m = arr.size()
                            n = Number of elements whose occurences need to be calculated.
                    in general, [ O ( n X n )]
                    where   n = arr.size()
*/
int findOccurrences1(int arr[], int size, int key){
    int count = 0;
    for (int i = 0; i < size; i++)
        if(arr[i] == key)
            count++;
    return count;
}

/*
2. Hashing Method -- involves prestoring and fetching
    -Create a Global hash array with element as arr[i] = k,
        where k is the occurrence of i in the original array.
    -fetch the occurrence as per requirement
*/

// Precomputation
// Create Global Vector
vector<int> hashArray1 (1e7, 0);
void createHash ( int arr[], int size){
    for (int i = 0; i < size; i++)
    hashArray1[arr[i]]++;
}
// Fetching
int hashing(int key){
    return hashArray1[key];
}

// 3. Hashing for charecter array
// Precomputation
// Create global array;
vector<int> hashArray2 (256, 0);
void createCharHash(string s){
    for (int i = 0; i < s.size(); i++)
        hashArray2[s[i]]++; 
}
// Fetch
int hashingChar(char c){
    return hashArray2[c];
}

int main(){
    cout<<"\nNumber Hash Array Size: "<<hashArray1.size()<<endl;
    cout<<"\nString Hash Array Size: "<<hashArray2.size()<<endl;
    
    int arr1[5] = { 1, 2, 2, 3, 4};
    int arr2[5] = { 1, 2, 5, 3, 4};
    int arr3[5] = { 1, 2, 2, 3, 4};
    string s = "Krishna Kumar Kunnath";
    cout<<"\nString Size: "<<s.size()<<endl;

    // Brute Force
    cout<<"\nNumber of Occurrences: "<<findOccurrences1(arr1, 5, 1);
    cout<<"\nNumber of Occurrences: "<<findOccurrences1(arr1, 5, 2);
    cout<<"\nNumber of Occurrences: "<<findOccurrences1(arr1, 5, 3);
    
    // Number Hashing
    cout<<"\nNumber Hashing";
    // precompute
    createHash(arr1,5);
    // Fetching
    cout<<"\nNumber of Occurrences: "<<hashing(1);
    cout<<"\nNumber of Occurrences: "<<hashing(2);
    cout<<"\nNumber of Occurrences: "<<hashing(3);
    
    // Character Hashing
    cout<<"\nCharacter Hashing";
    // precompute
    createCharHash(s);
    // Fetching
    cout<<"\nNumber of Occurrences: "<<hashingChar('K');
    cout<<"\nNumber of Occurrences: "<<hashingChar('n');
    cout<<"\nNumber of Occurrences: "<<hashingChar('a');
    cout<<"\nNumber of Occurrences: "<<hashingChar('r');

}