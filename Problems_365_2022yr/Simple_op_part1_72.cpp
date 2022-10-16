#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	while(t--)
	{
	    int n, ans=0; cin >> n;
	    string str; cin >> str;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(str[i] == '1')
	            ans++;
	        else
	            break;
	    }
	    
	    cout << ans << "\n";
	}
	return 0;
}
