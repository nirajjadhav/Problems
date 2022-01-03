#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        int ans = 2 * (n - k);

        ans += 2 * ((k-1) / 2);

        cout << ans << endl;
    }
}