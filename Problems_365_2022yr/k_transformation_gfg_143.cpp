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
#define endl "\n";
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<"\n";
#define yes cout<<"YES"<<"\n";
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
//String to Number
ll str_to_num(string s)
{
    stringstream pk(s);
    ll num;
    pk>>num;
    return num;
}
//Number to string
string num_to_str(ll num)
{
    return to_string(num);
}

//Prime O(sqrt(n))
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

//GCD or HCF
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// LCM 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
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


vector<int> k_Transformation(int n, int m, int k, vector<vector<int> > grid, int q, vector<vector<int> > queries) {
    vector<int> res;

    for(int i=0; i<queries.size(); i++)
    {
        
        int t = queries[i][0], val = queries[i][1], lx = queries[i][2], ly = queries[i][3], rx = queries[i][4], ry = queries[i][5];

        int count = 0;

        for(int m=lx; m<=rx; m++)
        {
            for(int n=ly; n<=ry; n++)
            {
                int ele;
                if(t != 0)
                {
                    ele = (grid[m][n] + t) % k;
                
                    if(ele == val)
                    {
                        count ++;
                    }
                }
                else
                {
                    if(grid[m][n] == val)
                    {
                        count++;
                    }
                }
            }
        }

        res.push_back(count);
        
    }
    return res;
}


int main()
{
    fastio;
    int n = 3, m = 3, k = 4, q = 2;

    vector<vector<int>> grid = {{0 , 1, 1}, {1, 2, 3}, {0, 2, 1}};
    vector<vector<int>> queries = {{0, 1, 0, 0, 2, 2}, {2, 2, 1, 1, 2, 2}};
    vector<int> res;

    res = k_Transformation(n , m, k, grid, q, queries);

    for(auto e: res)
    {
        cout << e << " ";
    }
    cout << "\n";

    return 0;

}
