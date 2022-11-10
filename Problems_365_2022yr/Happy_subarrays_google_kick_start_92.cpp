#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, ans, i, j, t1, m, c1, s1;
    
    cin>>t;
    
    for(t1=1; t1<=t; t1++)
    {
        cin>>n;
        ans=0;
        
        ll a[n+1], pre[n+1], pre_mul[n+1];
        stack<ll> s;
        
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        a[0]=0;
        pre[0]=a[0];
        
        for(i=1; i<=n; i++){
            pre[i]=pre[i-1]+a[i];
        }
        
        pre_mul[0]=n*a[0];
        
        for(i=1; i<=n; i++)
        {
            pre_mul[i]=pre_mul[i-1]+(n-i+1)*a[i];
        }
        ans=0;
        for(i=n; i>=1; i--)
        {
            
            if(s.empty()==false){
                while(s.empty()==false){
                    if(pre[s.top()]>=pre[i-1]){
                        s.pop();
                    }else{
                        break;
                    }
                }
                if(s.empty()==true){
                    j=n+1;
                }else{
                    j=s.top();
                }
            }else{
                j=n+1;
            }
            j--;
            
            //cout<<j<<"\n";
            if(a[i]>=0){
            ans=ans+pre_mul[j];
            
                ans=ans-pre_mul[i-1];
            
            
            ans=ans-(n-i+1-(j-i+1))*(pre[j]-pre[i-1]);
            }
            s.push(i);
            
            //cout<<ans<<"\n";
        }
        
        cout<<"Case #"<<t1<<": "<<ans<<"\n";
        
    }
    
}