#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x < 0)
        {
            count++;
        }
    }
    cout << count;
}
