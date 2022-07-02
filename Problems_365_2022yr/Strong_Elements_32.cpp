#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int

void solve()
{
    int n=0; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    vector<int> prefix(n);
    prefix[0] = v[0];
    for(int i=1; i<n; ++i)
    {
        prefix[i] = __gcd(prefix[i-1], v[i]);
    }
    vector<int> suffix(n);
    suffix[n-1] = v[n-1];
    for(int i=n-2; i>=0; --i)
    {
        suffix[i] = __gcd(suffix[i+1], v[i]);
    }

    int strong = 0;

    for(int i = 0; i<n; ++i)
    {
        if(i==0 && suffix[i+1]>1)
            strong++;
        else if(i==n-1 && prefix[n-2]>1)
            strong++;
        else if(__gcd(prefix[i-1],suffix[i+1]) > 1)
            strong++;
    }

    cout << strong << endl;
}


int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}