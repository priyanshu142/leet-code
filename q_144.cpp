class Solution
{
public:
  void trev(TreeNode *root, vector<int> &pre)
  {
    if (root == NULL)
    {
      return;
    }
    pre.push_back(root->val);
    trev(root->left, pre);
    trev(root->right, pre);
    return;
  }
  vector<int> preorderTraversal(TreeNode *root)
  {
    vector<int> pre;
    trev(root, pre);
    return pre;
  }
};