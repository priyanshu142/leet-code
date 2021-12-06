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
  int maxDepth(TreeNode *root)
  {
    TreeNode *temp = root;
    static int n = 1, max = 0;
    if (temp == NULL)
    {
      return 0;
    }
    if (temp->left != NULL)
    {
      n++;
      maxDepth(temp->left);
      n--;
    }
    if (temp->right != NULL)
    {
      n++;
      maxDepth(temp->right);
      n--;
    }
    if (max < n)
    {
      max = n;
    }
    return max;
  }
};