#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> res;

    if(root == NULL ) return res;
    q.push(root);

    while(!q.empty()) {
        int size = q.size();
        vector<int> level;
        for(int i = 0; i < size; i++)
        {
            TreeNode *node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->val);
        }
        res.push_back(level);
    }
    return res;
}

int main()
{
    TreeNode *head = new TreeNode(3);
    head->left = new TreeNode(9);
    head->right = new TreeNode(20);
    head->right->left = new TreeNode(15);
    head->right->right = new TreeNode(7);

    vector<vector<int>> res = levelOrder(head);

    for(auto s: res)
    {
        for(auto i:s)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}