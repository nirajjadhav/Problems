#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	while(t--)
	{
	    int n, c=1; cin >> n;
	    string str; cin >> str;
	    
	    for(int i=1; i<n; i++)
	    {
	        if(str[i] == '0')
	            c++;
	        else
	            break;
	    }
	    cout << c << "\n";
	}
	return 0;
}
