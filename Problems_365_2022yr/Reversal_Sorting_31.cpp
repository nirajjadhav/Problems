#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int N, X; cin >> N >> X;
    int arr[N];

    for (int i = 0;i<N;i++)
    {
        cin >> arr[i];
    }
    bool ans = true;

    for (int i = 0; i < N-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            if(arr[i] + arr[i+1] <= X)
            {
                swap(arr[i], arr[i+1]);
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if(ans == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

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