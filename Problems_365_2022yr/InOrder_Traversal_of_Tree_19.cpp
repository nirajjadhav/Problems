
#include <bits/stdc++.h>
using namespace std;

vector<int> res;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) return res;

        res = inorderTraversal(root->left);

        res.push_back(root->val);

        res = inorderTraversal(root->right);

        return res;
    }
};



int main()
{
    TreeNode* root = new TreeNode(10);
    root->right = new TreeNode(30);
    root->left = new TreeNode(20);
    root->right->left = new TreeNode(40);
    root->right->right = new TreeNode(50);

    Solution obj;
    vector<int> l;
    l = obj.inorderTraversal(root);

    for(auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }

    return 0;
}