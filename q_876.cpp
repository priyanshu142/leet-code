class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    ListNode *temp = head;
    int n = 0, i = 0, x = 0;
    while (temp != NULL)
    {
      n++;
      temp = temp->next;
    }
    i = (n / 2) + 1;

    while (head)
    {

      if (x == i - 1)
      {
        return head;
      }
      head = head->next;
      x++;
    }
    return head;
  }
};