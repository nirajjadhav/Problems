#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int



int maxArea(vector<int> &arr)
{
    int area = 0;
    int l = 0;
    int h = arr.size()-1;

    while(l < h)
    {
        area = max(area, min(arr[l], arr[h]) * (h-l));

        if(arr[l] > arr[h])
            h--;
        else
            l++;

        
    }
    return area;
}


int main()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> heights = {3, 1, 2, 4, 5};

    cout << maxArea(heights);

    return 0;
}