#include<std/c++11.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int dist = abs(c-a) + abs(d-b);
        if (k >= dist && k %2 == dist % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}