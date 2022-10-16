
#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



ll solve()
{
    ll sum = 0, m, n, p;

    cin >> m >> n >> p;

    vector<ll> adj[m];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ll ele; cin >> ele;
            adj[i].push_back(ele);
        }
    }

    vector<ll> max_steps;
    ll maxi = adj[0][0];

    for(int i = 0; i < n; i++)
    {
        maxi = adj[0][i];
        for(int j = 0; j < m; j++)
        {
            maxi = max(maxi, adj[j][i]);
        }
        max_steps.push_back(maxi);
    }

    for(int i = 0; i < n; i++)
    {
        sum += adj[p-1][i];
    }

    ll res_sum = accumulate(max_steps.begin(), max_steps.end(), 0);

    return abs(sum - res_sum);

}


int main()
{
    fastio;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    ll t;

    cin >> t;
    for(int j=1; j<=t; j++)
    {

        cout << "Case #" << j << ": " << solve() << endl;
    }

    return 0;
}