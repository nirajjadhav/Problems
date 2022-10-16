#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, m, i, j, ans, p;
    
    cin>>t;
    
    for(j=1; j<=t; j++)
    {
        
        cin>>n>>p;
        ll a[n], b[n];
        
        for(i=0; i<n; i++)
        cin>>a[i];
        

        sort(a, a+n);
        
        b[0]=a[0];
        
        for(i=1; i<n; i++)
        b[i]=b[i-1]+a[i];
        
        
        ans=a[p-1]*p-a[p-1]-b[p-2];
        
        for(i=p; i<n; i++)
        {
            ans=min(ans, a[i]*p-a[i]-(b[i-1]-b[i-p]));
        }
        
        cout<<"Case #"<<j<<": "<<ans<<"\n";
        
        
        
        
        
        
    }
}