#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int &e: arr)
    {
        cin >> e;
    }

    /*for(auto it=arr.begin(); it!=arr.end(); ++it)
	{
	    cout << *(it) << " ";
	}
	cout << endl;*/

    int sum = 0, curr = 0;

    vector<int> v;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
		{
		    v.push_back(curr);
			curr = 0;
		}
		else
		{
			curr++;
		}
	}
	v.push_back(curr);

    for(auto it=v.begin(); it!=v.end(); ++it)
	{
	    cout << *(it) << " ";
	}
	cout << endl;


    int res = 0;

    for(int i = 0; i < v.size(); ++i)
    {
        if(v[i] == 0)
            continue;
        else if(v[i] == 1)
        {
            res += 1;
        }
        else
        {
            res += ((v[i] * (v[i] + 1)) / 2);
        }
    }

    cout << res << endl;
    return;
     
}


int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}