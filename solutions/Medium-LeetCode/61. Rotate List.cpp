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
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL || head->next == NULL)
            return head;

        // Find length
        int len = 1;
        ListNode *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
            len++;
        }

        // Avoid unnecessary rotations
        k = k % len;

        while (k--)
        {

            // Find last node and node before last
            ListNode *curr = head;

            while (curr->next->next != NULL)
            {
                curr = curr->next;
            }

            ListNode *last = curr->next;

            // Move last to front
            curr->next = NULL;
            last->next = head;
            head = last;
        }

        return head;
    }
};