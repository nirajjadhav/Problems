#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



int solve()
{
    int n, m; cin >> n >> m;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        int e;cin >> e;
        sum += e;
    }

    return (sum % m);


}


int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Case #" << tc << ": " << solve() << endl;
    }
    return 0;

}