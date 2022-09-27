#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	while(t--)
	{
	    int a, b, x; cin >> a >> b >> x;
	    int diff;
	    if(a == b)
	    {
	        cout << "Yes" << "\n";
	        continue;
	    }
	    else if(a > b)
	    {
	        diff = a - b;
	    }
	    else
	    {
	        diff = b - a;
	    }
	    
	    int step = x + x;
	    
	    if(diff % step == 0)
	        cout << "Yes" << "\n";
	    else
	        cout << "No" << "\n";
	    
	} 
	
	
	return 0;
}
