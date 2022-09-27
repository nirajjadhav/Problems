#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, ans, d, u, t1;
    string c;
    cin>>t;
    
    for(t1=1; t1<=t; t1++){
        cin>>n;
        vector<pair<string, ll>> a;
        vector<pair<ll, ll>> b;
        
        for(i=0; i<n; i++){
            cin>>c>>d>>u;
            
            a.push_back({c, u});
            b.push_back({d, u});
            
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        ans=0;
        
        for(i=0; i<n; i++){
            if(a[i].second==b[i].second){
                ans++;
            }
        }
        
        cout<<"Case #"<<t1<<": "<<ans<<"\n";
    }
}