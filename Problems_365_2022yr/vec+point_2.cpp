#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, q; cin >> n >> q;
    vector<int> *vecptrarray[n];
    
    for(int i=0; i<n; i++)
    {
        int k; cin >> k;
        vecptrarray[i] = new vector<int>[k];
        for(int j=0; j<k; j++)
        {
            int val; cin >> val;
            //cout << val << endl;
            vecptrarray[i]->push_back(val);
        }

    }
    //cout << (*vecptrarray[0])[0] << endl;
    
    for(int i=0; i<q; i++)
    {
        int m,n; cin >> m >> n;
        cout << (*vecptrarray[m])[n] <<endl;
    }
    return 0;
}
