#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n; cin >> n;

    int arr[n];
    for(auto &e: arr)
    {
        cin >> e;
    }

    vector<string> v;
    for(int i=0; i<n; i++)
    {
        int l; cin >> l;
        string str; cin >> str;
        v.push_back(str);
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            if(v[i][j] == 'U')
            {
                arr[i]--;
                if(arr[i] == -1)
                    arr[i] = 9;
            }
            else if(v[i][j] == 'D')
            {
                arr[i]++;
                if(arr[i] == 10)
                    arr[i] = 0;
            }
        }
    }


    for(auto e: arr)
    {
        cout << e << " ";
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