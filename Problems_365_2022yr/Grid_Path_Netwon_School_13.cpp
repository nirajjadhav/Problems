
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	ll t, n, m, i, j, f, val;

	cin>>t;

	for(;t--;)
	{
		f=0;

		cin>>n>>m;

		ll a[n][m], b[n][m];

		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}

		if(n==m && n==1){
			cout<<"YES\n";
			continue;
		}

		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				if(i==0 && j==0){
					b[i][j]=0;
				}

				if(b[i][j]!=0){
					f++;
					break;
				}

				if(i+1<n && j+1<m){
					if(a[i][j]<b[i][j+1]){
						f++;
						break;
					}else{
						a[i][j]-=b[i][j+1];
						b[i][j+1]=0;
						
						if(b[i+1][j]<a[i][j]){
							f++;
							break;
						}else{
							b[i+1][j]-=a[i][j];
						}
					}
				}else if(i+1<n){

					if(b[i+1][j]<a[i][j]){
						f++;
						break;
					}else{
						b[i+1][j]-=a[i][j];
					}
				}else if(j+1<m){
					if(b[i][j+1]!=a[i][j]){
						f++;
						break;
					}else{
						b[i][j+1]=0;
					}
					
				}
			}

			if(f>0){
				break;
			}
		}
		
		if(f==0){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}