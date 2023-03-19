class WordDictionary {
    struct Node{
        struct Node *child[26];
        int end;
        char c;
    };

    Node* getnode(char c)
    {
        Node *newnode = new Node();
        newnode->c = c;
        newnode->end = 0;
        for(int i=0; i<26; i++)
        {
            newnode->child[i] = NULL;
        }
        return newnode;
    }

    Node* root = getnode('/');

    void Trie_insert(string s)
    {
        int index, i=0;
        Node *curr = root;
        while(s[i])
        {
            index = s[i] - 'a';
            if(!curr->child[index])
                curr->child[index] = getnode(s[i]);
            curr = curr->child[index];
            ++i;
        }
        curr->end +=1;
    }

    bool Trie_search(string s, Node *curr, int pos, int n)
    {
        if(s[pos] == '.')
        {
            bool res = false;
            Node *current = curr;
            for(int i=0; i<26; i++)
            {
                if(pos == n-1 && curr->child[i])
                {
                    current = curr->child[i];
                    res |= current->end>0?true:false;
                }
                else if(curr->child[i] && Trie_search(s, curr->child[i], pos+1, n))
                    return true;
            }
            return res;
        }
        else if(curr->child[s[pos] - 'a'])
        {
            if(pos == n-1)
            {
                curr = curr->child[s[pos] - 'a'];
                return curr->end>0?true:false;
            }
            return Trie_search(s, curr->child[s[pos] - 'a'], pos+1, n);
        }
        return false;
    }




public:
    WordDictionary() {
    }
    
    void addWord(string word) {
        Trie_insert(word);
    }
    
    bool search(string word) {
        return Trie_search(word, root, 0, word.size());
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */