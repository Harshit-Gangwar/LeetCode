class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = 0;
        int fast = 0;

        while (true)
        {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
            // same as we find the starting element of the linked list cycle
            if (slow == fast)
            {
                slow = 0;

                while (slow != fast)
                {
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;
            }
        }
        return -1;
    }
};