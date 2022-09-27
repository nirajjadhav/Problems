#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> res(8);

    res = obj.generate(8);
    int len = res.size();

    for(int i = 0; i < res.size(); i++)
    {
        for(int k=0; k < len; k++)
        {
            cout << " ";
        }
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << "  ";
        }
        cout << endl;
        len--;
    }

    return 0;
}