#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n, b=0; cin >> n;
    string str; cin >> str;

    vector<int> arr(26, -1);

    for(int i=0; i<n; i++)
    {
        //cout << str[i] - 'A' << endl;
        if(arr[str[i] - 'A'] == -1 )
        {
            //cout << "b+2" << endl;
            b += 2;
            arr[str[i] - 'A'] = 1;
        }
        else
        {
           // cout << "b+1" << endl;
            b += 1;
        }
    }

    cout << b << endl;
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