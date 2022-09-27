#include <bits/stdc++.h>
using namespace std;


vector<int> countBits(int n) {
        vector<int> mem(n+1);
        
        mem[0] = 0;
        
        for(int i=1; i<=n; ++i)
        {
            mem[i] = mem[(i >> 1)] + (i & 1);
        }
        
        return mem;
        
    }


int main() 
{
    int n = 5;
    vector<int> res;


    res = countBits(n);

    for(auto &e: res)
    {
        cout << e << " ";
    }

    return 0;

}