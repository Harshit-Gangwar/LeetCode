class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int low = 0;
        int sum = 0;

        // First window
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }

        int ans = sum;

        // Slide the window
        for (int high = k; high < nums.size(); high++)
        {
            sum += nums[high] - nums[low];
            low++;
            ans = max(ans, sum);
        }

        return (double)ans / k;
    }
};