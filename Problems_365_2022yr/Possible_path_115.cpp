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

bool isSafe(int x, int y, int newx, int newy, int n, int m,  vector<vector<int>> &visited, vector<vector<int>> &grid)
{
    if(newx >= 0 && newx < n && newy >= 0 && newy < m && visited[newx][newy] == 0)
    {
        if(grid[x][y] == 0 || grid[x][y] == 1)
        {
            if(grid[newx][newy] == 0 || grid[newx][newy] == 2)
                return true;
            else
                return false;
        }
        else
        {
            return true;
        } 
    }
    return false;
}


void solve(vector<vector<int>> &grid, int n, int m, priority_queue <int, vector<int>, greater<int> > &ans, int x, int y, vector<vector<int>> &visited, int count)
{
    if(x == n-1 && y == m-1)
    {
        ans.push(count);
        return;
    }

    visited[x][y] = 1;

    //down
    if(isSafe(x, y, x+1, y, n, m, visited, grid))
    {
        count++;
        solve(grid, n, m, ans, x+1, y, visited, count);
        count--;
    }

    //left
    if(isSafe(x, y, x, y-1, n, m, visited, grid))
    {
        count++;
        solve(grid, n, m, ans, x, y-1, visited, count);
        count--;
    }

    //right
    if(isSafe(x, y, x, y+1, n, m, visited, grid))
    {
        count++;
        solve(grid, n, m, ans, x, y+1, visited, count);
        count--;
    }

    //up
    if(isSafe(x, y, x-1, y, n, m, visited, grid))
    {
        count++;
        solve(grid, n, m, ans, x-1, y, visited, count);
        count--;
    }

    visited[x][y] = 0;

}

bool isUpdatable(int n, int m, int x, int y)
{
    if(x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}

int possiblePath(int n, int m, vector<vector<int>> &grid) {
        // Your code goes here
        /*for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2)
                {
                    grid[i][j] = 0;
                    //down
                    if(isUpdatable(n, m, i+1, j))
                        grid[i+1][j] = 0;
                    
                    //up
                    if(isUpdatable(n, m, i-1, j))
                        grid[i-1][j] = 0;

                    //left
                    if(isUpdatable(n, m, i, j-1))
                        grid[i][j-1] = 0;

                    //right
                    if(isUpdatable(n, m, i, j+1))
                        grid[i][j+1] = 0;
                }
            }
        }
        */

        priority_queue <int, vector<int>, greater<int> > ans;
        vector<vector<int>> visited(n, vector<int> (m, 0));

        if(grid[0][0] == 1)
            return -1;
        
        int x = 0, y = 0, count = 0;
        solve(grid, n, m, ans, x, y,  visited, count);
        if(ans.empty())
            return -1;
        else
            return ans.top();
}


int main()
{
    fastio;
    int n = 2, m = 3;
    vector<vector<int>> grid = {{0, 2, 1},
         {0, 1, 0,}};

    int res = possiblePath(n, m, grid);
    cout << res << endl;

    return 0;

}
