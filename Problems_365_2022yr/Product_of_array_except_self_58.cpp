#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



vector<int> solve(vector<int> &nums)
{
    //cout << "solve";
    vector<int> prefix(nums.size());
    vector<int> suffix(nums.size());
    vector<int> res(nums.size());

    int prd = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        prd = prd * nums[i - 1];
        prefix[i] = prd;
    }

    int prd1 = 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        prd1 = prd1 * nums[i + 1];
        suffix[i] = prd1;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        //cout << "inside";
        if (i == 0)
        {
            res[i] = suffix[0];
        }
        else if (i == (nums.size() - 1))
        {
            res[i] = prefix[nums.size() - 1];
        }
        else
        {
            res[i] = prefix[i] * suffix[i];
        }
    }

    return res;
}


int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n; cin >> n;
    vector<int> nums(n), res;

    for(auto &e: nums)
    {
        cin >> e;
    }

    res = solve(nums);

    for(auto &e: res)
    {
        cout << e << " ";
    }
    //cout << "[" << res[0] << " " << res[1] << "]" << "\n";

    return 0;
}