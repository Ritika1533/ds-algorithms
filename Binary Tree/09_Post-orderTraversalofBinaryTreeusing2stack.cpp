//
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
    vector<int> postorder(TreeNode *root)
    {
        vector<int> v;
        if (root == NULL)
            return v;
        stack<TreeNode *> st1, st2;
        st1.push(root);
        while (!st1.empty())
        {
            root = st1.top();
            st1.pop();
            st2.push(root);
            if (root->left != NULL)
            {
                st1.push(root->left);
            }
            if (root->right != NULL)
            {
                st1.push(root->right);
            }
        }
        while (!st2.empty())
        {
            root = st2.top();
            st2.pop();
            v.push_back(root->val);
        }
        return v;
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans = postorder(root);
        return ans;
    }
};
// tc o(n) sc :o(2n)

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st1;
        vector<int> postorder;
        if (root == NULL)
            return postorder;
        st1.push(root);
        while (!st1.empty())
        {
            root = st1.top();
            st1.pop();
            postorder.push_back(root->val);
            if (root->left != NULL)
            {
                st1.push(root->left);
            }
            if (root->right != NULL)
            {
                st1.push(root->right);
            }
        }
        reverse(postorder.begin(), postorder.end());
        return postorder;
    }
}
////tc o(n) sc :o(n)