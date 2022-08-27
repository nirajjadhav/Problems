#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n, m;
    cin >> n >> m;


    vector<int> nums(n + 1, 1);

    vector<vector<int>> behind(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        nums[x] = 0;

        behind[y].push_back(x);
    }

    for(int i = 1; i <= n; ++i)
    {
        if(nums[i] == 1)
            behind[n].push_back(i);
    }

    priority_queue<int> q;
    vector<int> res(n + 1);

    for(int i = n; i > 0; --i)
    {
        for(int num : behind[i])
        {
            q.push(num);
        }

        if(q.empty())
        {
            cout << -1 << "\n";
            return;
        }

        res[i] = q.top();
        q.pop();
    } 

    for(int i = 1; i <= n; ++i)
    {
        cout << res[i] << " ";
    }
    cout << endl;

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