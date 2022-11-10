#include<bits/stdc++.h>
using namespace std;



bool isAnagram(string& s, string& t) {
        vector<int> freq(26, 0);
        if(s.size() != t.size())
        {
            return false;
        }
        
        for(int i=0; i<s.size(); ++i)
        {
            freq[s[i] - 'a']++;
        }
        
        for(int j=0; j<t.size(); j++)
        {
            if(freq[t[j] - 'a'] == 0)
                return false;
            
            freq[t[j] - 'a']--;
        }
        
        if(*max_element(freq.begin(), freq.end()) > 0)
            return false;
        else
            return true;
    }

int main()
{
    string s, t; cin >> s >> t;

    if(isAnagram(s, t))
        cout << "True" << "\n";
    else
        cout << "False" << "\n";
}