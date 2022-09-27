#include<bits/stdc++.h>
using namespace std;


int getSum(int x, int y)
{
    cout << "y = " << y << "x = " << x << endl;
    if(y == 0)
        return x;
    else
        return getSum(x ^ y, (unsigned)(x & y) << 1);
}

int main()
{
    int x = 15, y = -30;

    cout << "Sum = " << getSum(x, y) << endl;
}