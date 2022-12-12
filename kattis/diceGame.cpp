#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d\n%d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    if((a+b+c+d) > (e+f+g+h))
    {
        cout << "Gunnar";
    }
    else if((a+b+c+d) < (e+f+g+h))
    {
        cout << "Emma";
    }
    else
    {
        cout << "Tie";
    }
}
