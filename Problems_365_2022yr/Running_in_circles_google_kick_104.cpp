#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, t1, i, ans, d, rem, sign, n, l;
    string c;
    cin>>t;
    
    for(t1=1; t1<=t; t1++)
    {
        cin>>l>>n;
        ans=0;
        rem=l;
        sign=0;
        
        for(i=0; i<n; i++)
        {
            cin>>d>>c;
            
            if(c=="C"){
                if(sign==0)
                {
                    if(d>=rem){
                        ans++;
                        d=d-rem;
                        ans=ans+(d/l);
                        rem=l-d%l;
                    }else{
                        rem=rem-d;
                    }
                    
                }else{
                    
                    sign=0;
                    
                   
                    rem=2*l-rem;
                   
                    
                    if(d>=rem){
                        ans++;
                        d=d-rem;
                        ans=ans+(d/l);
                        rem=l-d%l;
                    }else{
                        rem=rem-d;
                    }
                    
                   
                    
                }
            }else{
                if(sign==1)
                {
                    if(d>=rem){
                        ans++;
                        d=d-rem;
                        ans=ans+(d/l);
                        rem=l-d%l;
                    }else{
                        rem=rem-d;
                    }
                    
                }else{
                    
                    sign=1;
                    
                  
                    rem=2*l-rem;
                  
                    
                    if(d>=rem){
                        ans++;
                        d=d-rem;
                        ans=ans+(d/l);
                        rem=l-d%l;
                    }else{
                        rem=rem-d;
                    }
                    
                   
                    
                }
            }
        }
        
        cout<<"Case #"<<t1<<": "<<ans<<"\n";
    }
}