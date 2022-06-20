
#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int


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
        ll n, k;

        cin >> n >> k;

        ll total_groups = (n/5) + (n%5==0?0:1);

        ll current_group = (k/5) + (k%5==0?0:1);
        
        cout << total_groups-current_group << endl;
    }

    return 0;
}