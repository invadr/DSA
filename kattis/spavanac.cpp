#include "bits/stdc++.h"

using namespace std;

int main()
{
    int h;
    int m;
    scanf("%d %d", &h, &m);

    if(m - 45 < 0 && h == 0)
    {
        h = 23;
        m = 60 - (45 - m);
    }
    else if(m - 45 < 0 && h == 23)
    {
        h = 22;
        m = 60 - (45 - m);
    }
    else if(m - 45 < 0 && h != 0 && h != 23)
    {
        h -= 1;
        m = 60 - (45 - m);
    }

    else
    {
        if(h == 0)
        {
            h = 1;
        }
        if(h == 23)
        {
            h = 0;
        }
        m = m - 45;
    }
    cout << h << " " << m;
}
