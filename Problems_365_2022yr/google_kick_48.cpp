
#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



int solve()
{
    int n; cin >> n;

    int B = 1, i = 6;

    while(i <= n)
    {
        B++;
        i += 5;
    }

    return B;

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
    int n = 1;
    while (n <= t)
    {
        cout << "Case #" << n << ": " << solve() << endl;
        n++;
    }

    return 0;
}