class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    stack<int> s1;
    stack<int> s2;
    while (l1 != NULL)
    {
      s1.push(l1->val);
      l1 = l1->next;
    }
    while (l2 != NULL)
    {
      s2.push(l2->val);
      l2 = l2->next;
    }
    int carry = 0;
    ListNode *head = NULL;
    while (!s1.empty() || !s2.empty())
    {
      int x = 0;
      int y = 0;
      if (!s1.empty())
      {
        x = s1.top();
        s1.pop();
      }
      if (!s2.empty())
      {
        y = s2.top();
        s2.pop();
      }
      ListNode *temp = new ListNode();
      int z = x + y + carry;
      if (z > 9)
      {
        temp->val = z % 10;
        carry = z / 10;
      }
      else
      {
        temp->val = z;
        carry = 0;
      }
      temp->next = head;
      head = temp;
    }
    if (carry > 0)
    {
      ListNode *temp = new ListNode();
      temp->val = carry;
      temp->next = head;
      head = temp;
    }
    return head;
  }
};