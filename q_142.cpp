class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (fast == slow)
      {
        // To find the starting element where the loop starts
        fast = fast;
        slow = head;
        while (slow != fast)
        {
          // Both move by 1 step
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
      }
    }
    return NULL;
  }
};