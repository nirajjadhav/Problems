#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    ll N; cin >> N;
    string str; cin >> str;

    map<char, char> m{{'A','T'}, {'T','A'}, {'C','G'}, {'G','C'}};

    for(int i = 0; i < str.size(); i++)
    {
        cout << m[str[i]];
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