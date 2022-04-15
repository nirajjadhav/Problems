
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    int cn = 0;
    cin >> t;

    while (t--)
    {
        string I, P;
        int i = 0, j = 0, count = 0, n = 0, m = 0;
        cn++;
        cin >> I >> P;

        n = I.length();
        m = P.length();

        while(i < n && j < m)
        {
            if(I[i] == P[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        if(i >= n)
        {
            count += (m - n);
            cout << "Case #" << cn << ": " << count << endl;
        }
        else
        {
            cout << "Case #" << cn << ": " << "IMPOSSIBLE" << endl;
        }

    }

    return 0;
}