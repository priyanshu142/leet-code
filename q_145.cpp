class Solution
{
public:
  vector<int> postorderTraversal(TreeNode *root)
  {
    stack<TreeNode *> st;
    vector<int> vt;
    while (root || !st.empty())
    {
      if (root)
      {
        st.push(root);
        vt.push_back(root->val);
        root = root->right;
      }
      else
      {
        TreeNode *node = st.top();
        st.pop();
        root = node->left;
      }
    }
    reverse(vt.begin(), vt.end());
    return vt;
  }
};