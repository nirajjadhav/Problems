#include <bits/stdc++.h>
using namespace std;



class tag
{
    public:
        string tagName;
        map<string, string> mp;
        tag()
        {
            tagName = "";
        }
        ~tag() {}
};


int main()
{
    int n, q; cin >> n >> q;

    const char delimiters[] = "< >=\"/";

    tag t[n/2];
    cin >> ws;

    for(int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);

        char *token = strtok((char*)str.c_str(), delimiters);

        if(token == NULL)
        {
            continue;
        }

        //cout << "token = " << token << endl;

        int len = strlen(token);
        char tmp[len + 1];
        memcpy(tmp, token, len);
        tmp[len] = '\0';
        //cout << "tmp = " << tmp << endl; 

        token = strtok(NULL, delimiters);

        if(token == NULL)
        {
            continue;
        }

        t[i].tagName = tmp;

        
        while (token != NULL)
        {
            //cout << "token = " << token << endl;
            int len = strlen(token);
            char key[len + 1];
            memcpy(key, token, len);
            key[len] = '\0';
            //cout << "key = " << key << endl;

            token = strtok(NULL, delimiters);

            if(token != NULL)
            {
                int len1 = strlen(token);
                char val[len1 + 1];
                memcpy(val, token, len1);
                val[len1] = '\0';
                //cout << "val = " << val << endl;
                t[i].mp.insert(pair<string,string>(key, val));
                token = strtok(NULL, delimiters);
            }
        }

        


    }

    /*
    for(int i = 0; i < n/2; i++)
    {
        cout << "tagName = " << t[i].tagName << endl;
        for(auto it = t[i].mp.begin(); it != t[i].mp.end(); it++)
        {
            cout << "key= " << it->first << "  " <<  "value= " << it->second << endl;
        }
    }*/


    cin >> ws;


    for(int i=0; i < q; i++)
    {
        string query;
        getline(cin, query);

        size_t found = 0;

        found = query.find_last_of('.');

        if(found == string::npos)
        {
            found = 0;
        }
        else
        {
            found = found + 1;
        }

        size_t knot = query.find('~');

        string attrkey, attrvalue;
        if (knot != string::npos)
        {
            attrkey = query.substr(found, knot-found);
            attrvalue = query.substr(knot+1);
        }

        //cout << "attrkey= " << attrkey << " " << "attrvalue= " << attrvalue << endl;
        
        bool flag = false;
        for(int i = 0; i < n/2; i++)
        {
            //cout << t[i].tagName << " " << attrkey << endl;
            if(t[i].tagName == attrkey)
            {
                //cout << "matched" << endl;
                for(auto it = t[i].mp.begin(); it != t[i].mp.end(); it++)
                {
                    //cout << "key=" << it->first << "  " <<  "value=" << it->second << "hi" << attrvalue  << "hi" << endl;
                    if(it->first == attrvalue)
                    {
                        cout << it->second;
                        flag = true;
                        break;
                    }
                }
            }
            if(flag == true)
                break;
            
        }
        if(flag == false)
        {
            cout << "Not Found!";
        }
        cout << endl;

    }

}