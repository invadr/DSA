#include "bits/stdc++.h"

using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    int res = a.compare(b);
    if(res <= 0)
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }
}
