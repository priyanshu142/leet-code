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
  TreeNode *invertTree(TreeNode *root)
  {
    TreeNode *temp = root;
    TreeNode *x;
    if (temp == NULL)
    {
      return 0;
    }
    if (temp->left != NULL || temp->right != NULL)
    {

      if (temp->left != NULL)
      {
        invertTree(temp->left);
      }

      if (temp->right != NULL)
      {
        invertTree(temp->right);
      }
      x = temp->left;
      temp->left = temp->right;
      temp->right = x;
    }
    return root;
  }
};