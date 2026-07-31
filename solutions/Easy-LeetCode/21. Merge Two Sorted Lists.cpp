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

        ListNode *a = list1;
        ListNode *b = list2;

        ListNode *dummy = new ListNode(); // head pointer of new node
        ListNode *tail = dummy;           // temporary pointer of head

        while (a != NULL && b != NULL)
        {
            // choosing the lower value
            if (a->val <= b->val)
            {
                // inserting it into the new list
                tail->next = a;
                a = a->next;
            }
            else
            {
                tail->next = b;
                b = b->next;
            }

            tail = tail->next;
        }

        // Attach remaining nodes
        if (a != NULL)
            tail->next = a;
        else
            tail->next = b;

        return dummy->next;
    }
};
