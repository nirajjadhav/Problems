#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
#define PI 3.14159265358

long double solve()
{
    int A, B, R; cin >> R >> A >> B;

    
    int curr_radius = R;
    long double radius_sum = PI * (R * R);

    while(true)
    {
        curr_radius *= A;
        radius_sum += PI * (curr_radius * curr_radius);
        curr_radius /= B;

        if(curr_radius == 0) break;

        radius_sum += PI * (curr_radius * curr_radius);  
    }

    return radius_sum;

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

    for(int i = 0; i < t; i++)
    {
        cout << "Case #" << (i+1) << ": " << fixed << setprecision(6) << solve() << "\n";
    }

    return 0;
}