class Solution
{
public:
  vector<string> res;

  bool isLeafNode(TreeNode *node)
  {
    if (!node->left && !node->right)
      return true;
    else
      return false;
  }

  void recursiveRootToLeaf(TreeNode *root, vector<int> &path)
  {
    if (!root)
      return;

    path.push_back(root->val);

    if (isLeafNode(root))
    {
      string s;
      size_t i = 0;
      for (; i < path.size() - 1; ++i)
      {
        s += to_string(path[i]) + "->";
      }
      s += to_string(path[i]);
      res.push_back(s);
    }

    recursiveRootToLeaf(root->left, path);
    recursiveRootToLeaf(root->right, path);
    path.pop_back();
  }

  vector<string> binaryTreePaths(TreeNode *root)
  {
    vector<int> path;
    recursiveRootToLeaf(root, path);
    return res;
  }
};