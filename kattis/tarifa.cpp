#include "bits/stdc++.h"

using namespace std;

int main()
{
    int x, n;
    cin >> x;
    cin >> n;

    int rollover = x;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a < x)
        {
            rollover = rollover + (x - a);
        }
        else if (a > x)
        {
            rollover = rollover + (x - a);
        }
        if (rollover <=x)
        {
            rollover = x;
        }
    }
    cout << rollover;
}
