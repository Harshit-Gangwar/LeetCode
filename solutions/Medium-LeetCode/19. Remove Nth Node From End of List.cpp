class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        int len = 0;
        ListNode *temp = head;

        // Find length
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        // If removing the first node
        if (n == len)
        {
            return head->next;
        }

        // Move to node before the one we want to remove
        ListNode *curr = head;

        for (int i = 1; i < len - n; i++)
        {
            curr = curr->next;
        }

        // Remove node
        curr->next = curr->next->next;

        return head;
    }
};