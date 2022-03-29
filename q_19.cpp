class Solution
{
public:
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *p = head;
    ListNode *q = NULL;
    ListNode *w = head;
    int y = 0;
    if (head == NULL || head->next == NULL)
    {
      head = NULL;
      return head;
    }

    while (true)
    {
      if (w == NULL)
      {
        break;
      }
      else
      {
        y++;
        w = w->next;
      }
    }
    if (y - n == 0)
    {
      return head->next;
    }
    for (int i = 0; i < y - n - 1; i++)
    {
      p = p->next;
    }
    p->next = p->next->next;
    return head;
  }
};