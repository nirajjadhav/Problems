#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a)
        cin >> e;
    
    sort(a.begin(), a.end());

    multiset<int> avail;

    avail.insert(1);

    for(int i = 0; i < n; i++)
    {
        auto it = avail.upper_bound(a[i]);

        if(it == avail.begin())
        {
            avail.insert(2);
        }
        else
        {
            int new_idx = *avail.begin() + 1;
            avail.erase(avail.begin());
            avail.insert(new_idx);
        }
    }

    cout << (int)avail.size() << "\n";
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