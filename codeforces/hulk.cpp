#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "I hate it";
        return 0;
    }
    else
    {
        cout << "I ";

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                cout << "hate ";
            }
            else
            {
                cout << "love ";
            }
            if(i < n)
            {
                cout << "that I ";
            }
        }
    }
    cout << "it";

    return 0;
}
