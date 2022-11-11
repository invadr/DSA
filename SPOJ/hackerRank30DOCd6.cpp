/*
HackerRank 30 Days Of Code - Day 6
Task
Given a string S, of length N that is indexed from 0 to N - 1, 
print its even-indexed and odd-indexed characters as 2 
space-separated strings on a single line (see the Sample 
below for more detail).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    cin >> a;
    string b, c;

    
    for(int i = 0; i < a; ++i)
    {
        cin >> b;
        for(int j = 0; j < b.length(); j += 2)
        {
            if(j <= b.length()-1)
            {
                cout << b[j];
            }
        }
        cout << " ";
        for(int k = 1; k < b.length(); k += 2)
        {
            if(k <= b.length()-1)
            {
                cout << b[k];
            }
        }
        cout << "\n";
    }
    return 0;
}

