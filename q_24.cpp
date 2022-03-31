class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    int t = 0;
    int i = 0;
    ListNode *temp1 = head;
    if (head == NULL)
    {
      return head;
    }
    ListNode *temp2 = NULL;
    ListNode *temp3 = NULL;
    ListNode *temp4 = NULL;
    while (temp1->next != NULL)
    {
      if (temp1->next == NULL && (i % 2 != 0))
      {
        break;
      }
      i++;
      if (t == 0)
      {
        t++;
        temp2 = head;
        head = head->next;
        temp3 = head->next;
        head->next = temp2;
        temp2->next = temp3;
        temp4 = temp1;
        temp1 = temp1->next;
      }

      else
      {
        temp2 = temp1->next;
        temp3 = temp1;
        temp1->next = temp2->next;
        temp2->next = temp3;
        temp4->next = temp2;
        temp4 = temp3;
        temp1 = temp1->next;
      }
      if (temp1 == NULL)
      {
        break;
      }
    }
    return head;
  }
};