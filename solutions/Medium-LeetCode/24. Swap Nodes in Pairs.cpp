class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *curr = head;
        ListNode *prev = NULL;

        while (curr != NULL && curr->next != NULL)
        {

            ListNode *first = curr;
            ListNode *second = curr->next;

            // Swap
            first->next = second->next;
            second->next = first;

            // Connect previous pair
            if (prev != NULL)
            {
                prev->next = second;
            }
            else
            {
                // First pair becomes new head
                head = second;
            }

            // Move forward
            prev = first;
            curr = first->next;
        }

        return head;
    }
};