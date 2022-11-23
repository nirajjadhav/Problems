#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, x, y, i, j, sum, ans;
    
    cin>>t;
    
    for(j=1;j<=t;j++){
        cin>>n>>x>>y;
        
        sum=(n*(n+1))/2;
        
        if((sum%(x+y))!=0){
            cout<<"Case #"<<j<<": IMPOSSIBLE\n";
            continue;
        }
        
        sum=(sum*x)/(x+y);
        
        vector<ll> a;
        
        for(i=n; i>=1; i--)
        {
            if(i<=sum){
                sum-=i;
                a.push_back(i);
            }
        }
        
        cout<<"Case #"<<j<<": POSSIBLE\n";
        cout<<a.size()<<"\n";
        
        n=a.size();
        
        for(i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        
        cout<<"\n";

        
    }
    
}