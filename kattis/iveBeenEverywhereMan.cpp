#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    set<string> cities;
    vector<int> distinct;

    for(int i = 0; i < a; i++)
    {
        cin >> b;
        for(int j = 0; j < b; j++)
        {
            string city;
            cin >> city;
            cities.insert(city);
        }
        distinct.push_back(cities.size());
        cities.clear();
    }
    for(int i = 0; i < distinct.size(); i++)
    {
        cout << distinct[i] << endl;
    }
    return 0;
}
