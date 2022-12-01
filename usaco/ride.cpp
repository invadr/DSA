/*
ID: invadr.1
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    int productA = 1;
    int productB = 1;
    string a, b;
    fin >> a >> b;

    for(int i = 0; i < a.length(); i++)
    {
        productA *= a[i] - 'A' + 1 ;
    }
    for(int i = 0; i < b.length(); i++)
    {
        productB *= b[i] - 'A' + 1 ;
    }
    fout << ((productA % 47 == productB % 47) ? "GO" : "STAY") << endl;
    return 0;
}
