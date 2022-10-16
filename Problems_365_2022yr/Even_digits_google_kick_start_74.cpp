#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, k, ans1, ans2, l;
    string a;
    bool change;
    cin>>t;
    
    for(j=1;j<=t;j++)
    {
        ans1=ans2=0;
        cin>>a;
        l=a.size();
        
        n=0;
        
        for(i=0; i<l; i++)
        {
            n=n*10+(a[i]-48);
        }
        
        change=false;
        for(i=0; i<l; i++)
        {
            if(change==false)
            {
                if((a[i]-48)%2==1)
                {
                    if(a[i]=='9')
                    ans1=(ans1+2)*10+(0);
                    else
                    ans1=ans1*10+(a[i]-47);
                    change=true;
                }else{
                    ans1=ans1*10+(a[i]-48);
                }
            }else{
                ans1=ans1*10+0;
            }
        }
        
        change=false;
        for(i=0; i<l; i++)
        {
            if(change==false)
            {
                if((a[i]-48)%2==1)
                {
                    ans2=(ans2)*10+(a[i]-49);
                    change=true;
                }else{
                    ans2=ans2*10+(a[i]-48);
                }
            }else{
                ans2=ans2*10+8;
            }
        }
        
        cout<<"Case #"<<j<<": "<<min(ans1-n, n-ans2)<<"\n";
        
        
        
        
    }
}