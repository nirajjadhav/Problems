#include<bits/stdc++.h>
using namespace std;


int table[256];
void initialize()
{
    table[0] = 0;
    for(int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i/2];
    }
}

int hammingWeight(uint32_t n) {
        initialize();

        return table[n & 0xff] + table[(n >> 8) & 0xff] + table[(n >> 16) & 0xff] + table[(n >> 24) & 0xff];
    }


int main()
{
    unsigned int i = 7;

    cout << hammingWeight(i) << "\n";

    return 0;
}