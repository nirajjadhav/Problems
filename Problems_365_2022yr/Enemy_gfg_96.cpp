// C++ Program to count islands in boolean 2D matrix
#include <bits/stdc++.h>
using namespace std;

int largestArea(int n, int m, int k, vector<vector<int>>& enemy)
{
	vector<int> r, c;
	int maxr = 0, maxc = 0;
	if(k == 0)
		return n*m;

	r.push_back(0);
	c.push_back(0);
	for(auto &e: enemy)
	{
		r.push_back(e[0]);
		c.push_back(e[1]);
	}
	r.push_back(n+1);
	c.push_back(m+1);

	sort(r.begin(), r.end());
	sort(c.begin(), c.end());

	for(int i = 1; i < r.size(); ++i)
	{
		maxr = max(maxr, r[i] - r[i-1] - 1);
		maxc = max(maxc, c[i] - c[i-1] - 1);
	}

	return maxr * maxc;
}


// Driver code
int main()
{

	int n = 3, m =3;
	int k = 1;


	vector<vector<int>> enemy = {{3,3}};
	//cout << enemy[0][0] << endl;

	cout << "Area: " << largestArea(n, m, k, enemy);

	return 0;
}

// This is code is contributed by rathbhupendra
