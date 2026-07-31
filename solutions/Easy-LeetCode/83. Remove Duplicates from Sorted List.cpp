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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *crnt = head;

        // if lisit is empty or has only one element
        if (crnt == NULL || crnt->next == NULL)
        {
            return head;
        }

        while (crnt != NULL && crnt->next != NULL)
        {

            // check condition for the same values if yeas than increse the pointer by two(next -> next) instead of (-> next)

            if (crnt->val == crnt->next->val)
            {
                crnt->next = crnt->next->next;
            }
            else
            {
                crnt = crnt->next;
            }
        }
        return head;
    }
};