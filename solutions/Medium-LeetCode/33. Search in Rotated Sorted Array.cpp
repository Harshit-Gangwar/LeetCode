
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {

            int mid = (start + end) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[start] <= nums[mid])
            {

                // If target lies in the sorted left half, search there
                if (nums[start] <= target && target < nums[mid])
                {
                    end = mid - 1;
                }
                // Else search in the right half
                else
                {
                    start = mid + 1;
                }
            }
            else
            {

                // If target lies in the sorted right half, search there
                if (nums[mid] < target && target <= nums[end])
                {
                    start = mid + 1;
                }
                // Else search in the left half
                else
                {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};