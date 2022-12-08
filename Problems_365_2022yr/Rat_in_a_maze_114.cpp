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

bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m)
{
    if(x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    return false;
}


void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
{
    if(x == n-1 && y == n-1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    //down
    if(isSafe(x+1, y, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, x+1, y, visited, path);
        path.pop_back();
    }

    //left
    if(isSafe(x, y-1, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, x, y-1, visited, path);
        path.pop_back();
    }

    //right
    if(isSafe(x, y+1, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, x, y+1, visited, path);
        path.pop_back();
    }

    //up
    if(isSafe(x-1, y, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, x-1, y, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;

}

vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int> (n, 0));

        if(m[0][0] == 0)
            return ans;
        
        int x = 0, y = 0;
        string path = "";
        solve(m, n, ans, x, y,  visited, path);
        sort(ans.begin(), ans.end());
        return ans;
}


int main()
{
    fastio;
    vector<vector<int>> m = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
    int n = 4;

    vector<string> res;

    res = findPath(m, n);

    for(auto e: res)
    {
        cout << e << " ";
    }

    return 0;

}
