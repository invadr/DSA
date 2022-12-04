#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, e=0, o=0;
	cin >> a;

	for(int i = 0; i < a; i++)
	{
	    cin >> b;
	    if(b % 2 == 0)
	    {
	        e++;
	    }
	    else
	    {
	        o++;
	    }
	}
	if(e > o)
	{
	    cout << "READY FOR BATTLE";
	}
	else
	{
	    cout << "NOT READY";
	}
	return 0;
}
