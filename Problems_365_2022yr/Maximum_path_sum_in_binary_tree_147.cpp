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

typedef struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}TreeNode;

int maxPath(TreeNode* root, int &maxi)
{
    if(root == NULL)
        return 0;
    
    int left = max(0, maxPath(root->left, maxi));
    int right = max(0, maxPath(root->right, maxi));

    maxi = max(maxi, left+right+root->val);

    return max(left, right) + root->val;

}

int maxPathSum(TreeNode* root)
{
    int maxi = INT_MIN;

    maxPath(root, maxi);

    return maxi;
        
}


int main()
{

    TreeNode *root = nullptr;
    TreeNode *node1 = nullptr;
    node1 = new TreeNode(9);
    TreeNode *node2 = nullptr;
    node2 = new TreeNode(20);
    root = new TreeNode(-10, node1, node2);

    cout << root->val << endl;
    cout << root->left->val << endl;
    cout << root->right->val << endl;

    TreeNode *node3 = new TreeNode(15);
    TreeNode *node4 = new TreeNode(7);

    node2->left = node3;
    node2->right = node4;

    cout << node2->left->val << endl;
    cout << node2->right->val << endl;
    
    cout << maxPathSum(root) << endl;
    return 0;

}
