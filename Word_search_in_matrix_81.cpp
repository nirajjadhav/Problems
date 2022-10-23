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


bool search(vector<vector<char>>& board, int i, int j, string& word, int idx)
{
    if(idx == word.size()-1) return true;
    board[i][j] -= 65;
    if(i > 0 && board[i-1][j] == word[idx+1] && search(board, i-1, j, word, idx+1))
        return true;
    if(j > 0 && board[i][j-1] == word[idx+1] && search(board, i, j-1, word, idx+1))
        return true;
    if(i < board.size()-1 && board[i+1][j] == word[idx+1] && search(board, i+1, j, word, idx+1))
        return true;
    if(j < board[0].size()-1 && board[i][j+1] == word[idx+1] && search(board, i, j+1, word, idx+1))
        return true;

    board[i][j] += 65;
    return false;

}

bool exist(vector<vector<char>>& board, string word) 
{
    ll r = board.size(), c = board[0].size();

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            if(board[i][j] == word[0] && search(board, i, j, word, 0)) return true;
    
    return false;
}


int main()
{
    fastio;
    vector<vector<char>> board;
    string word;
    ll m, n; cin >> m >> n;

    for(int i = 0; i < m; i++)
    {
        vector<char> temp(n);
        for(int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }
        board.push_back(temp);
    }

    cin >> word;

    if(exist(board, word))
    {
        cout << "True" << line;
    }
    else
    {
        cout << "False" << line;
    }

    return 0;

}
