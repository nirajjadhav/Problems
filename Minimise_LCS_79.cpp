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



ll solve()
{
    ll n; cin >> n;
    string str1, str2; cin >> str1; cin >> str2;
    vl c1(26, 0), c2(26, 0);

    for(int i=0; i<str1.size(); i++)
    {
        c1[str1[i] - 97]++;
    }

    for(int i=0; i<str2.size(); i++)
    {
        c2[str2[i] - 97]++;
    }
    ll lcs=0, temp;   
    for(int i=0;i<26;i++)
    {
        temp = min(c1[i], c2[i]);
        if(temp > lcs)
        {
            lcs = temp;
        }
    }

    return lcs;
}


int main()
{
    fastio;
    ll TestCase=1;
    cin>>TestCase;
    for(ll i=1;i<=TestCase;i++)
    {
        cout << solve() << line;
    }
}
