#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int

void solve()
{
    ll n; cin >> n; 
    string s, res = ""; cin >> s;

    ll c0 = 0, c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0')
            c0++;
        else
            c1++;
    }

    if(c0 < c1)
    {
        while(c1--)
        {
            res += '1';
        }
    }
    else
    {
        while(c0--)
        {
            res += '0';
        }
    }

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