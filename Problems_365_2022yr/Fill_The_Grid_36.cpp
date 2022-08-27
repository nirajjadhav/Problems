#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    ll n, m; cin >> n >> m;

    int row = n % 2, col = m % 2;
    //cout << row << " " << col <<endl;
    if(row == 0 && col == 0)
    {
        cout << "0" << endl;
        return;
    }
    else if(row == 0 && col == 1)
    {
        cout << n << endl;
        return;
    }
    else if(row == 1 && col == 0)
    {
        cout << m << endl;
        return;
    }
    else
    {
        cout << ((n + m) - 1) << endl;
        return;
    }
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