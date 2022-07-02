#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int N; cin >> N;

    int array[N];
    int visited[1001] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
        visited[array[i]]++;
    }

    int max_repeat_ele  = *max_element(visited, visited+1001);

    cout << N - max_repeat_ele << endl;


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