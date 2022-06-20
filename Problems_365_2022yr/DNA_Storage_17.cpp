
#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
    fastio;
    int t;
    
    cin >> t;

    while (t--)
    {
        string str, res;
        int n, i=0;
        cin >> n;

        cin >> str;

        while(i < n)
        {
            if(str[i] == '0')
            {
                if(str[i+1] == '0')
                    res = res + 'A';
                else
                    res = res + 'T';
            }
            else
            {
                if(str[i+1] == '0')
                    res = res + 'C';
                else
                    res = res + 'G';
            }

            i += 2;
        }

        cout << res << endl;

    }
    return 0;
}