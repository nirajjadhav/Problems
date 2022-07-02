// C++ program for the above approach
#include <iostream>
using namespace std;

int power(int x, int y)
{
	int result = 1;
	while (y > 0) 
    {
	    if(y&1==1) // y is odd
	    {
		    result=result*x;
	    }
        x=x*x;
        y=y>>1; // y=y/2;
	}
	return result;
}

// Driver Code
int main()
{
	int x = 2;
	int y = 3;

	cout << (power(2, 3));
	return 0;
}

