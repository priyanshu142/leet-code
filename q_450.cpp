class Solution
{
public:
  TreeNode *findMIN(TreeNode *root)
  {
    while (root->left != NULL)
    {
      if (root->left == NULL)
      {
        return root;
      }
      root = root->left;
    }
    return root;
  }
  TreeNode *del(TreeNode *root, int key)
  {
    if (root == NULL)
    {
      return root;
    }
    else if (key < root->val)
    {
      root->left = del(root->left, key);
    }
    else if (key > root->val)
    {
      root->right = del(root->right, key);
    }
    else
    {
      if (root->left == NULL && root->right == NULL)
      {
        root = NULL;
        return root;
      }
      else if (root->left == NULL)
      {
        TreeNode *temp = root;
        root = root->right;
        return root;
      }
      else if(root->right==NULL){
                TreeNode* temp=root;
                root=root->left;
                return root;
            }
      else
      {
        TreeNode *temp = findMIN(root->right);
        root->val = temp->val;
        root->right = del(root->right, temp->val);
      }
    }
    return root;
  }

  TreeNode *deleteNode(TreeNode *root, int key)
  {
    root = del(root, key);
    return root;
  }
};
