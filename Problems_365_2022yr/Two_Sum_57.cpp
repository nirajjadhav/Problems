#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



vector<int> solve(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    vector<int> res;

    for(int i = 0; i < nums.size(); ++i)
    {
        int temp = target - nums[i];
        if(mp.find(temp) != mp.end())
        {
            res.emplace_back(i);
            res.emplace_back(mp[temp]);
            return res;
        }

        mp[nums[i]] = i;
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

    int target;
    int n; cin >> n;
    vector<int> nums(n), res(2);

    for(auto &e: nums)
    {
        cin >> e;
    }
    cin >> target;

    res = solve(nums, target);

    cout << "[" << res[0] << " " << res[1] << "]" << "\n";

    return 0;
}