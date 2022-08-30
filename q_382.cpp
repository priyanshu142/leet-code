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
  ListNode *h;
  Solution(ListNode *head)
  {
    h = head;
  }
  // we are using reservoir sampling with which we can choose a random value from a array of unknown length n;
  int getRandom()
  {
    ListNode *temp = h;
    int res;
    int length = 1;
    while (temp != NULL)
    {
      if (rand() % length == 0)
      {
        res = temp->val;
      }
      length++;
      temp = temp->next;
    }
    return res;
  }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */