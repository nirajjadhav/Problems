#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



void solve()
{
    int n, r, c, sR, sC; cin >> n >> r >> c >> sR >> sC;
    string str; cin >> str;

    // vector<vector<int>> arr;
    // // for(int i = 0; i < r; i++)
    // // {
    // //     vector<int> s;
    // //     arr

    // // }
    
    // for(int i = 0; i < r; i++)
    // {
    //     vector<int> s;
    //     for(int j = 0; j < c; j++)
    //     {
    //         s.push_back(0);
    //     }
    //     arr.push_back(s);
    // }
    // vector<int> rI(r, 0);
    // vector<int> cI(c, 0);
    int i = sR-1, j = sC-1;
    set<pair<int, int>> s;
    s.insert(make_pair(i, j));

    for(int k = 0; k < str.size(); k++)
    {
        if(str[k] == 'E' && j+1 < c)
        {  
            j += 1; 
            auto f = s.find(make_pair(i,j));
            if(f != s.end())
            {
                if(j+1 >= c)
                    continue;
                j++;
                auto f = s.find(make_pair(i,j));
                while(j < c && (f != s.end()))
                {
                    j++;
                    f = s.find(make_pair(i,j));
                }
                s.insert(make_pair(i, j));
            }
            else
            {
                s.insert(make_pair(i, j));
            }
            //cout <<"i=" << i << " " << "j=" <<j <<endl; 
        }
        else if(str[k] == 'W' && j-1 >= 0)
        {
            j -= 1;
            auto f = s.find(make_pair(i,j));
            if(f != s.end())
            {
                if(j-1 < 0)
                    continue;
                j--;
                auto f = s.find(make_pair(i,j));
                while(j > 0 && (f != s.end()))
                {
                    j--;
                    //cout <<"i==" << i << " " << "j==" <<j <<endl;
                    f = s.find(make_pair(i,j));
                    //if(f != s.end()) cout << "found" <<endl;
                }
                s.insert(make_pair(i, j));
            }
            else
            {
                s.insert(make_pair(i, j));
            }
            //cout <<"i=" << i << " " << "j=" <<j <<endl; 
        }
        else if(str[k] == 'S' && i+1 < r)
        {
            i += 1;
            auto f = s.find(make_pair(i,j));
            if(f != s.end())
            {
                if(i+1 >= r)
                    continue;
                i++;

                auto f = s.find(make_pair(i,j));
                while(i < r && (f != s.end()))
                {
                    i++;
                    f = s.find(make_pair(i,j));
                }
                s.insert(make_pair(i, j));
            }
            else
            {
                s.insert(make_pair(i, j));
            }
            //cout <<"i=" << i << " " << "j=" <<j <<endl; 
        }
        else if(str[k] == 'N' && i-1 >= 0)
        {
            i -= 1;
            auto f = s.find(make_pair(i,j));
            if(f != s.end())
            {
                if(i-1 < 0)
                    continue;
                i--;
                auto f = s.find(make_pair(i,j));
                while(i > 0 && (f != s.end()))
                {
                    i--;
                    f = s.find(make_pair(i,j));
                }
                s.insert(make_pair(i, j));
            }
            else
            {
                s.insert(make_pair(i, j));
            }
            //cout <<"i=" << i << " " << "j=" <<j <<endl; 
        }

        // for(auto &e: rI)
        // {
        //     cout << e << " ";
        // }
        // cout << endl;
        // for(auto &e: cI)
        // {
        //     cout << e << " ";
        // }
        // cout << endl;
    }

    cout << i+1 << " " << j+1;
    
}


int main()
{
    fastio;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Case #" << tc << ": ";
        solve();
        cout << "\n"; 
    }
    return 0;

}