/*

George’s pizza is round, and has a radius of  R cm. The outermost C  cm is crust,
and does not have cheese. What percent of George’s pizza has cheese?

*/
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int r, c, i;
    scanf("%d %d", &r, &c);
    i = r - c;
    double pi = 2 * acos(0.0);

    double wholeArea = pi * r * r;
    double crustArea = pi * c * c;
    double innerArea = pi * i * i;
    double cheesePercentage;

    if (innerArea > 0)
    {
        cheesePercentage = 100*(innerArea / wholeArea);
    }
    else
    {
        cheesePercentage = 0;
    }
    printf("%.6f", cheesePercentage);
    //cout << cheesePercentage << endl;
}
