#include <bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i < nums.size(); ++i)
        {
            result ^= (i+1)^nums[i];
        }

        return result;
    }



int main()
{
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    cout << missingNumber(nums) << "\n";

    return 0;
}