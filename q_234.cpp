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
  bool isPalindrome(ListNode *head)
  {
    if (!head || !head->next)
      return true;
    ListNode *fast = head;
    ListNode *slow = head;

    stack<int> s;

    while (fast && fast->next)
    {
      s.push(slow->val);
      slow = slow->next;
      fast = fast->next->next;
    }
    if (fast != nullptr)
    {
      slow = slow->next;
    }

    while (!s.empty() && slow)
    {
      if (s.top() != slow->val)
      {
        return false;
      }
      s.pop();
      slow = slow->next;
    }
    return true;
  }
};