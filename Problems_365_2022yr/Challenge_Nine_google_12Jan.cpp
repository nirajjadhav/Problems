
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, i, j, l, sum, rem, t1, f;
    string a;
    
    cin>>t;
    
    for(t1=1; t1<=t; t1++){
        cin>>a;
        
        l=a.size();
        
        sum=0;
        
        for(i=0; i<l; i++){
            sum=sum+a[i]-48;
        }
        
        rem=9-sum%9;
        
        if(rem==9){
            rem=0;
        }
        
        f=0;
        
        cout<<"Case #"<<t1<<": ";
        if(rem==0){
            cout<<a[0];
            cout<<"0";
            
            for(i=1; i<l; i++){
                cout<<a[i];
            }
        }else{
            for(i=0; i<l; i++){
                if(f==1){
                    cout<<a[i];
                }else{
                    if(a[i]-48>rem){
                        cout<<rem;
                        cout<<a[i];
                        f++;
                    }else{
                        cout<<a[i];
                    }
                }
            }
            if(f==0){
                cout<<rem;
            }
        }
        
        cout<<"\n";
    }
}