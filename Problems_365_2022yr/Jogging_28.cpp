#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int

const unsigned int M = 1000000007;

ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = (power(x, y / 2)) % M;
    if (y % 2 == 0)
        return (temp * temp) % M;
    else
        return (x * temp * temp) % M;
}


solve()
{
    ll N, X;
    
    cin >> N >> X;

    ll res = (X * power(2, N-1)) % M;

    cout << res << endl;


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