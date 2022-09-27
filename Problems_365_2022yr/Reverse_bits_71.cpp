#include<bits/stdc++.h>
using namespace std;


uint32_t reverseBits(uint32_t n) {
    int res = 0;

    for(int i = 0; i < 32; i++)
    {
        res <<= 1;
        res = res | (n & 1);
        n >>= 1;
    }
    return res;
}



int main()
{
    unsigned int i = -3;

    cout << reverseBits(i) << "\n";

    return 0;
}