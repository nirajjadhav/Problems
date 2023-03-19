/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool isTreeMatched(TreeNode* root, TreeNode* subroot){

        if(root == NULL && subroot == NULL)
        {
            return true;
        }

        if(root != NULL && subroot != NULL)
        {
            if(root->val != subroot->val)
            {
                return false;
            }

            return (isTreeMatched(root->left, subroot->left) && isTreeMatched(root->right, subroot->right)) ;
        }
        else
        {
            return false;
        }
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)
        {
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node->val == subRoot->val)
            {
                if(isTreeMatched(node, subRoot))
                    return true;
            }
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }

        return false;
    }
};