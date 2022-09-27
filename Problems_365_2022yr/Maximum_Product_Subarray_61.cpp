#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



int maxProduct(vector<int>& nums)
{


    int res = nums[0];
    int ma = res, mi = res;
    for(int i = 1; i < nums.size(); ++i)
    {
        if(nums[i] < 0)
        {
            swap(ma,mi);
        }

        ma = max(nums[i], ma*nums[i]);
        mi = min(nums[i], mi*nums[i]);
        res = max(res, ma);
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

    vector<int> v = {-2,3,-4};

    cout << maxProduct(v) << "\n";

    return 0;
}