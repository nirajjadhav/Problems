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


int lives = 5, limit = 4;



//Api return true if correct guess or false
bool guess(char c, string &word, vector<char> &tried) 
{
    for(int i = 0; i< word.size(); i++)
    {
        if(c == word[i] && tried[i] == '_')
        {
            tried[i] = c;
            return true;
        }
        
    }
    return false;
}

//utility function to print
void print(bool isCorrect, int nol, vector<char> wrong, vector<char> tried)
{
    cout << "No. of lives left : " << nol << endl;
    cout << "wrong guessed letters : ";
    for(int i = 0; i < wrong.size(); i++)
    {
        cout << wrong[i] << " ";
    }
    cout << endl;

    if(isCorrect)
    {
        cout << "word : ";
        for(int i = 0; i < tried.size(); i++)
        {
            cout << tried[i] << " ";
        }
        cout << endl;
    }

}

int main()
{
    //fastio;
    cout << "Welcome to word game" << endl;
    // number of lives and limit of guesses
    //int lives = 8, limit = 4;

    //word to be guessed
    string word = "MANGO";

    //hint to be displayed
    string hint = "FRUIT";

    vector<char> tried;
    vector<char> wrong;

    cout << "Word to be guessed : " << word << endl;
    cout << "No. of lives left : " << lives << endl;

    for(int i = 0; i < word.size(); i++)
    {
        tried.push_back('_');
    }
    cout << "word : ";
    for(int i = 0; i < word.size(); i++)
    {
        cout << tried[i] << " ";
    }

    cout << endl;
    int guessCount = 0;
    while(lives > 0)
    {

        cout << "Guess the letter : " << endl;
        guessCount++;

        char c;

        cin >> c;
        int index;
        if(guess(c, word, tried))
        {
            print(true, lives, wrong, tried);

            auto it = find(tried.begin(), tried.end(), '_');
            if(it == tried.end())
            {
                cout << "CONGRATULATIONS !!" << endl;
                return 0;
            }
        }
        else
        {
            limit--;

            if(guessCount >= limit)
            {
                cout << hint << endl;
            }

            lives--;
            wrong.push_back(c);
            print(false, lives, wrong, tried);
        }

    }


    cout << "you are out of lives!!" << endl;
    cout << "Correct Word : " << word << endl;


    return 0;

}
