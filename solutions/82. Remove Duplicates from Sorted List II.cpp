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
        ListNode *prev = NULL;

        while (crnt != NULL && crnt->next != NULL)
        {

            if (crnt->val == crnt->next->val)
            {

                int value = crnt->val;

                // Skip all nodes having this value
                while (crnt != NULL && crnt->val == value)
                {
                    crnt = crnt->next;
                }

                if (prev == NULL)
                {
                    head = crnt;
                }
                else
                {
                    prev->next = crnt;
                }
            }
            else
            {
                prev = crnt;
                crnt = crnt->next;
            }
        }

        return head;
    }
};
