// https://leetcode.com/problems/binary-tree-level-order-traversal/description/
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
class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            root = s.top();
            s.pop();
            v.push_back(root->val);
            if (root->right != NULL)
            {
                s.push(root->right);
            }
            if (root->left != NULL)
            {
                s.push(root->left);
            }
        }
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> v;
        preorder(root, v);
        return v;
    }
};