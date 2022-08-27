#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    ll n, k, r, b, res = 0;

    cin >> n >> k >> r >> b;

    res += k * r;

    n = n - k;

    if(r <= b)
    {
        res += n * r;
    }
    else
    {
        res += n * b;
    }

    cout<<  res << endl;
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