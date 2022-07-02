#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int P; cin >> P;

    if(P == 0)
    {
        cout << 0;
        cout << "\n";
        return;
    }

    int res = 0;

    if(P >= 100)
    {
        res = (P / 100);
        P  = P - (res * 100);
    }

    if(P == 0)
    {
        cout << res;
        cout << "\n";
        return;
    }
    else
    {
        if(P+res > 10)
        {
            cout << -1;
            cout << "\n";
            return;
        }
        else
        {
            cout << P + res;
        }
    }

    cout << "\n";
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