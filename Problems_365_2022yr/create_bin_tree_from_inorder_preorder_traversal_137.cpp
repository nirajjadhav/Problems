#include <bits/stdc++.h>
using namespace std;
int preIndex = 0;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void printLevelOrder(TreeNode* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<TreeNode*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        TreeNode* node = q.front();
        cout << node->val << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

TreeNode* cTree(vector<int>& preorder, vector<int>& inorder, int is, int ie){
    if(is > ie) return NULL;

    TreeNode* root = new TreeNode(preorder[preIndex++]);

    int inIndex;
    for(int i=is; i<= ie; i++)
    {
        if(inorder[i] == root->val)
        {
            inIndex = i;
            break;
        }
    }
    root->left = cTree(preorder, inorder, is, inIndex-1);
    root->right = cTree(preorder, inorder, inIndex+1, ie);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    return cTree(preorder, inorder, 0, preorder.size()-1);
}


int main()
{
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    TreeNode* root = buildTree(preorder, inorder);


    printLevelOrder(root);

    return 0;
}

