
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    bool flag = true;

    cin >> str;
    int start = 0, end = str.length()-1;
    
    while (start < end)
    {
        if (str[start] != str[end])
        {
            flag = false;
            break;
        }
        else
        {
            start++;
            end--;
        }

    }

    if(flag == false)
        cout << "Not a Palindrome" << endl;
    else
        cout << "Palindrome" << endl;
}