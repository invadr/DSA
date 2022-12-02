#include "bits/stdc++.h"

using namespace std;

int main()
{
    int r, n;
    scanf("%d %d", &r, &n);
    vector<int> rooms; //r
    vector<int> booked; //n
    vector<int> vacant; //r-n

    for(int i = 0; i < r; i++)
    {
        rooms.push_back(i+1);
    }

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vector<int>::iterator new_end;
        new_end = remove(rooms.begin(), rooms.end(), x);
    }
    
    sort(booked.begin(), booked.end());
    
    if(n >= r)
    {
        cout << "too late";
    }
    else
    {
        cout << rooms[0];
    }
    return 0;
}