class Solution
{
public:
  vector<int> rightSideView(TreeNode *root)
  {
    vector<int> vc;
    if (root == NULL)
    {
      return vc;
    }
    queue<TreeNode *> qu;
    qu.push(root);
    while (!qu.empty())
    {
      int k = qu.size();
      vc.push_back(qu.back()->val);
      for (int i = 0; i < k; i++)
      {
        TreeNode *temp = qu.front();
        if (temp->left != NULL)
        {
          qu.push(temp->left);
        }
        if (temp->right != NULL)
        {
          qu.push(temp->right);
        }
        qu.pop();
      }
    }
    return vc;
  }
};