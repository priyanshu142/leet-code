class Solution
{
public:
  void reorderList(ListNode *head)
  {
    ListNode *root = head;
    stack<ListNode *> st;
    queue<ListNode *> qu;
    int i = 0;
    if (!head || !head->next || !head->next->next)
      return;
    while (root != NULL)
    {

      st.push(root);
      i++;
      root = root->next;
    }
    int h = 0;
    root = head;
    for (int k = 0; k < i / 2; k++)
    {
      ListNode *element = st.top();
      st.pop();
      element->next = root->next;
      root->next = element;
      root = root->next->next;
    }
    root->next = NULL;
  }
};