#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



vector<long long> solve()
{
    int n; cin >> n;
    
    long long arr[n+1];
    vector<long long> v;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> s(arr, arr+n);

    sort(s.begin(), s.end());

    for(int i=0; i<n; i++)
    {
        auto it = lower_bound(s.begin(), s.end(), arr[i]*2);

        if(it != s.begin())
        {
            if(it != s.end() &&  *it == (arr[i]*2))
            {
                v.push_back(*it);
                continue;
            }
            it--;

            if(*it == arr[i])
            {
                if(it == s.begin())
                {
                    v.push_back(-1);
                    continue;
                }
                it--;
                v.push_back(*it);
                continue;
            }

            v.push_back(*it);

        }
        else
        {
            v.push_back(-1);
        }
    }

    return v;
}


int main()
{
    fastio;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    ll t;

    cin >> t;
    int n = 1;
    while (n <= t)
    {
        vector<long long> res;
        cout << "Case #" << n << ": ";
        res  = solve();
        for(auto x: res)
        {
            cout << x << " ";
        }
        cout << endl;
        n++;
    }

    return 0;
}

// nlog(n)