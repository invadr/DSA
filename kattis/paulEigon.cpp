#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf((b+c)/a&1 ? "opponent\n" : "paul\n");
}
