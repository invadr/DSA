#include "bits/stdc++.h"

using namespace std;

int main()
{
    int ball = 1;

    string line;
    cin >> line;

    for(int i = 0; i < line.length(); i++)
    {
        if(ball == 1 && line[i] == 'A')
        {
            ball = 2;
        }
        else if(ball == 1 && line[i] == 'C')
        {
            ball = 3;
        }
        else if(ball == 2 && line[i] == 'A')
        {
            ball = 1;
        }
        else if(ball == 2 && line[i] == 'B')
        {
            ball = 3;
        }
        else if(ball == 3 && line[i] == 'B')
        {
            ball = 2;
        }
        else if(ball == 3 && line[i] == 'C')
        {
            ball = 1;
        }
    }
    cout << ball;
}
