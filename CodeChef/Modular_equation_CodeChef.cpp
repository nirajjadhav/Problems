
#include <bits/stdc++.h>
using namespace std;

const int M = 5e5;

vector<vector<int> > divs(M);
void pre()
{
	for(unsigned int i=1; i<=M; i++)
	{
		for(unsigned int j=i; j<=M; j+=i)
		{
			divs[j].push_back(i);	
		}
	}
}

int main()
{
	pre();
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, b;
		cin >> n >> m;
		long long int res = 0;
		for(b=2; b<=n; b++)
		{
			int x = m - (m % b);
			if(x > 0)
			{
				res += lower_bound(divs[x].begin(), divs[x].end(), b) - divs[x].begin();
			}
			else
			{
				res += b - 1;
			}

		}

		cout << res << endl;
	}

	return 0;
}
