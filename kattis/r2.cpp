#include "bits/stdc++.h"

using namespace std;

int main()
{
    int rOne, s, rTwo = 0;
    scanf("%d %d", &rOne, &s);

    if(rOne < s)
    {
        int interval = s - rOne;
        rTwo = s + interval;
    }
    else
    {
        int interval = rOne - s;
        rTwo = s - interval;
    }
    cout << rTwo;

    return 0;
}
