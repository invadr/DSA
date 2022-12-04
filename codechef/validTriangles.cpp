#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0; i<T; i++)
	{
	    int A, B, C;
	    scanf("%d %d %d", &A, &B, &C);
	    if(A+B+C==180)
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	}
	return 0;
}
