// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    long long colosseum(int N,vector<int> A) {
        int g1 = 0, g2 = 0;
        int s = A.size();

        for(int i=s-1;i>=s-N;i--)
        {
            g2 += A[i];
        }
        
        for(int i=0;i<N;i++)
        {
            g1 += A[i];
        }

        cout << g1 << " " << g2 << endl;

        int res = g1-g2;
        int i=s-N-1, j= N;


        while(i > N-1)
        {
            g2 = g2 + A[i];
            g2 = g2 - A[i+N];
            while(j < N-1)
            {
                g1  = g1 + A[j];
                g1 = g1 - A[i-N];
                res = max(res, g1-g2);
                j++;
                 
            }
            i--;
            
        }

        cout << res << endl;
   }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        Solution obj;
        int n;
        cin>>n;
        vector<int> a(3*n);
         for (int i = 0; i <3*n; ++i){
            cin>>a[i];
        }
        cout << obj.colosseum(n,a) <<"\n";
    }
    return 0;
}
  // } Driver Code Ends