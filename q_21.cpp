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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *head = NULL, *temp2 = NULL;
    // if(list1== NULL|| list2 == NULL){
    //     return temp2;
    // }
    while (list1 != NULL && list2 != NULL)
    {
      ListNode *temp1 = new ListNode;
      temp1->next = NULL;
      if (list1->val <= list2->val)
      {
        temp1->val = list1->val;
        list1 = list1->next;
      }
      else
      {
        temp1->val = list2->val;
        list2 = list2->next;
      }
      if (head == NULL)
      {
        head = temp1;
        temp2 = head;
      }
      else
      {
        temp2->next = temp1;
        temp2 = temp2->next;
      }
    }

    while (list1 != NULL)
    {
      ListNode *temp1 = new ListNode;
      temp1->next = NULL;
      temp1->val = list1->val;
      list1 = list1->next;
      if (head == NULL)
      {
        head = temp1;
        temp2 = head;
      }
      else
      {
        temp2->next = temp1;
        temp2 = temp2->next;
      }
    }
    while (list2 != NULL)
    {
      ListNode *temp1 = new ListNode;
      temp1->next = NULL;
      temp1->val = list2->val;
      list2 = list2->next;
      if (head == NULL)
      {
        head = temp1;
        temp2 = head;
      }
      else
      {

        temp2->next = temp1;
        temp2 = temp2->next;
      }
    }
    return head;
  }
};
