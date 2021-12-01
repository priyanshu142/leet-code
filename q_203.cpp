/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *removeElements(ListNode *head, int val)
  {
    if (head == NULL)
    {
      return head;
    }
    while (head != NULL && head->val == val)
    {
      head = head->next;
    }
    if (head == NULL)
    {
      return head;
    }
    ListNode *prev = head;
    ListNode *temp = head->next;
    ListNode *temp2 = head->next;
    while (temp != NULL)
    {
      temp2 = temp2->next;
      if (temp->val == val)
      {

        prev->next = temp2;
      }
      else
      {
        prev = prev->next;
      }
      temp = temp->next;
    }
    return head;
  }
};