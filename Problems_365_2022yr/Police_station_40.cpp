// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int solve(int n, int a, vector<int> x) {
        int lar = 0, secondlar = -1, profit = 0, secondprofit = 0;

        for (int i = 0; i <n; i++) 
        {
            int diff  = abs(a - x[i]);
            //cout << "diff" << diff << endl;
            if(diff > profit)
            {
                profit  = diff;
                lar = i;
            }
        }

        //cout << profit << " " << lar <<endl;

        for (int i = 0; i < n; i++)
        {
            if(i != lar)
            {
                int diff = abs(a - x[i]);
                secondprofit = max(secondprofit, diff);
            }
        }

        //cout << secondprofit << " " <<endl;


        return (profit+secondprofit);

    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {

        int N, a;
        cin >> N >> a;


        vector<int> x(N);
        for (int i = 0; i < N; i++)
            cin >> x[i];

        Solution ob;
        cout << ob.solve(N, a, x) << "\n";
    }
    return 0;
}
  // } Driver Code Ends