#include <bits/stdc++.h>
using namespace std;

int main()
{
   /*vector<int> v;
    v.push_back(906);

    vector<int> v1;
    v1.push_back(106);

    vector<int> * p[10];
    p[0] = &v;
    p[1] = &v1;
    cout << (*p[0])[0] << endl;
    cout << (*p[1])[0] << endl;*/

    vector<int> * p[5];
    int val=0;
    for(int i=0; i<5; i++)
    {
        p[i] = new vector<int>();
        p[i]->push_back(val);
        val++;
        //cout << (*p[i])[0] << endl;
    }

    for(int i=0; i<5; i++)
    {
        cout << p[i]->size() << endl;
    }



}