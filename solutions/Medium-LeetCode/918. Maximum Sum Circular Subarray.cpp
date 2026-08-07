class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        int best_end = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            best_end = max(nums[i], best_end + nums[i]);
            ans = max(ans, best_end);
        }
        return ans;
    }

    int minSum(vector<int> &nums)
    {
        int best_end = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            best_end = min(nums[i], best_end + nums[i]);
            ans = min(ans, best_end);
        }
        return ans;
    }

    int maxSubarraySumCircular(vector<int> &nums)
    {
        int total = 0;
        for (int x : nums)
            total += x;

        int maxi = maxSum(nums);

        // All numbers are negative
        if (maxi < 0)
            return maxi;

        int mini = minSum(nums);

        return max(maxi, total - mini);
    }
};