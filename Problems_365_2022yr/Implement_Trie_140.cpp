class Trie {
    class Trie *child[26];
    bool isEndOfWord;
public:
    Trie() {
        for(int i=0; i<26; i++)
        {
            child[i] = NULL;
        }
        isEndOfWord = false;
    }
    
    void insert(string word) {
        class Trie *p = this;
        for(int i=0; i<word.size(); i++)
        {
            int index = word[i] - 'a';
            if(p->child[index] == NULL)
            {
                p->child[index] = new Trie();
                
            }
            p = p->child[index];
            //cout << word[i] ;
        }
        p->isEndOfWord = true;
        //cout << "endofword = true" ;
    }
    
    bool search(string word) {
        class Trie *p = this;
        for(int i=0; i<word.size(); i++)
        {
            int index = word[i] - 'a';
            if(p->child[index] == NULL)
            {
                return false;  
            }
            //cout << word[i] ;
            p = p->child[index];
        }
        //cout << "searchEndofword = " << p->isEndOfWord;

        return (p != NULL && p->isEndOfWord);
    }
    
    bool startsWith(string word) {
        class Trie *p = this;
        for(int i=0; i<word.size(); i++)
        {
            int index = word[i] - 'a';
            if(p->child[index] == NULL)
            {
                return false;  
            }
            p = p->child[index];
        }

        return (p != NULL );
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */