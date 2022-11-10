/*
    written by Niraj Jadhav.
    country:-INDIA
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line "\n";
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    stringstream pk(s);
    ll num;
    pk>>num;
    return num;
}
string num_to_str(ll num)
{
    return to_string(num);
}

/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
*/

const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;


ll countPalindrome(string s) {
    ll count = 0;
    vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));

    for(int g=0; g<s.size(); g++)
    {
        for(int i=0,j=g; j<s.size(); i++,j++)
        {
            if(g==0)
            {
                dp[i][j] = true;
            }
            else if(g==1)
            {
                if(s[i] == s[j]) dp[i][j] = true;
            }
            else
            {
                if(s[i] == s[j] && dp[i+1][j-1] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }

            if(dp[i][j] == true)
                count++;
        }
    }

     return count;
    }

int main()
{
    //fastio;
    //ll t; cin >> t;
    

    /*for(auto x: strs)
    {
        cout << x << " ";
    }
    cout << "\n";*/

    //for(int i=1; i<=t; ++i)
    //{
        string str; 
        //cout << "Please enter your name: \n";
        getline(cin, str);
        //cout << str.size() << endl;

        cout << countPalindrome(str) << line;
    //}

    return 0;

}
