// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



bool mycmp(const vector<int>& v1, vector<int>& v2)
{
    return (v1[1] < v2[1]);
}
 // } Driver Code Ends
// User function Template for C++
class Solution {
    

    /*bool maxcmp(vector<int> v1, vector<int> v2)
    {
        return (v1[2] < v2[2]);
    }*/
  public:
    int binarySearch(vector<vector<int>>& intervals, int index)
    {
        // Initialize 'lo' and 'hi' for Binary Search
        int lo = 0, hi = index - 1;
    
        // Perform binary Search iteratively
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if ((intervals[mid][1] <= intervals[index][0]) && (intervals[mid][0] < intervals[index][0]))
            {
                if (intervals[mid + 1][1] <= intervals[index][0] && (intervals[mid+1][0] < intervals[index][0]))
                    lo = mid + 1;
                else
                    return mid;
            }
            else
                hi = mid - 1;
        }
    
        return -1;
    }
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        
        sort(intervals.begin(), intervals.end(), mycmp);

        int *table = new int[n];
        table[0] = intervals[0][2];
    
        // Fill entries in table[] using recursive property
        for (int i=1; i<n; i++)
        {
            // Find profit including the current job
            int inclProf = intervals[i][2];
            int l = binarySearch(intervals, i);
            if (l != -1)
                inclProf += table[l];
    
            // Store maximum of including and excluding
            table[i] = max(inclProf, table[i-1]);
        }
    
        // Store result and free dynamic memory allocated for table[]
        int result = table[n-1];
        delete[] table;
        
        return result;

    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}
  // } Driver Code Ends