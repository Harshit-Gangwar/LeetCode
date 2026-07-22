class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int min_len = INT_MAX;
        int sum = 0;
        int low = 0;

        for (int high = 0; high < nums.size(); high++)
        {
            sum += nums[high];

            while (sum >= target)
            {
                min_len = min(min_len, high - low + 1);
                sum -= nums[low];
                low++;
            }
        }

        return (min_len == INT_MAX) ? 0 : min_len;
        //(condition) ? value if true : value if false ;
    }
};
