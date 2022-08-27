#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



int solve()
{
    int n; cin >> n;
    int cnt = 0;
    vector<int> arr(n);
    for(auto &e: arr)
    {
        cin >> e;
    }

    int maxi = arr[0];
    for(int i=0; i<n; ++i)
    {
        if((i == 0 || arr[i] > maxi ) && (i == (n-1) || arr[i] > arr[i+1]))
            cnt++;
        
        maxi = max(maxi, arr[i]);
    }

    return cnt;


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