#include "bits/stdc++.h"

using namespace std;

int main()
{
    int checker = 0;
    string lower = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int a;
    char s[a];
    scanf("%d \n %c", &a, s);

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(s[i] == lower[j])
            {
                checker = 1;
            }
            else
            {
                checker = 0;
            }
        }
    }
    if(checker == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
