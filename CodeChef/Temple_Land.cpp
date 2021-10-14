#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        if(n % 2 == 0)
        {
            cout << "no" <<endl;
            continue;
        }
        
        int start = 0, end = n-1, count = 1;
        bool flag = false;
        while(start <= end)
        {
            if((a[start] != count) || (a[end] != count))
            {
                flag = true;
                break;
            }
            else
            {
                start++;
                end--;
                count++;
            }
        }

        if(flag == false)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }

}