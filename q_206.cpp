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
  ListNode *reverseList(ListNode *head)
  {
    ListNode *temp1 = head;
    ListNode *temp2 = NULL;
    while (temp1 != NULL)
    {
      temp1 = head->next;
      head->next = temp2;
      temp2 = head;
      head = temp1;
    }
    temp2;
    return temp2;
  }
};