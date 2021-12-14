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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *temp = NULL;
    ListNode *head = NULL;
    ListNode *temp2 = NULL;
    int x, prev = 0;
    while (l1 != NULL || l2 != NULL)
    {
      ListNode *temp = new ListNode;
      temp->next = NULL;
      if (l2 != NULL && l1 != NULL)
      {
        x = l1->val + l2->val + prev;
        l1 = l1->next;
        l2 = l2->next;
        cout << endl
             << x;
      }

      else if (l1 != NULL && l2 == NULL)
      {
        x = l1->val + prev;
        l1 = l1->next;
        cout << endl
             << x;
      }
      else if (l1 == NULL && l2 != NULL)
      {
        x = l2->val + prev;
        l2 = l2->next;
        cout << endl
             << x;
      }
      if (x > 9)
      {
        x = x - 10;
        temp->val = x;
        prev = 1;
      }
      else
      {
        temp->val = x;
        prev = 0;
      }

      if (head == NULL)
      {
        head = temp;
        temp2 = temp;
      }
      else
      {
        temp2->next = temp;
        temp2 = temp2->next;
      }
    }
    if (prev == 1)
    {
      ListNode *temp = new ListNode;
      temp->next = NULL;
      temp->val = 1;
      temp2->next = temp;
    }
    return head;
  }
};