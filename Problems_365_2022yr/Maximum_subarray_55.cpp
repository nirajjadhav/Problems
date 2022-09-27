#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxEnding = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            maxEnding = max(maxEnding + nums[i], nums[i]);
            sum = max(maxEnding , sum);
        }

        return sum;
    }
};



int main()
{
    vector<int> nums = {5,4,-1,7,8};
    Solution obj;

    cout << obj.maxSubArray(nums) << endl;

    return 0;
}