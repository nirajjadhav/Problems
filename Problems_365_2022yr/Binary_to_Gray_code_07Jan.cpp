// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
    int greyConverter(int n)
    {
        
        // Your code here
        string binary = bitset<32> (n).to_string();
        string gray = "";
 
        // MSB of gray code is same as binary code
        gray += binary[0];
     
        // Compute remaining bits, next bit is computed by
        // doing XOR of previous and current in Binary
        for (int i = 1; i < binary.length(); i++) {
            // Concatenate XOR of previous bit
            // with current bit
            gray += xor_c(binary[i - 1], binary[i]);
        }
     
        return stoi(gray, 0, 2);
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
  // } Driver Code Ends