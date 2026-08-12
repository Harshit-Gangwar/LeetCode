class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        int low = 0;

        unordered_map<int, int> mp;

        for (int high = 0; high < n; high++)
        {

            mp[nums[high]]++;

            // If frequency becomes greater than k,
            // shrink the window from the left.
            while (mp[nums[high]] > k)
            {
                mp[nums[low]]--;
                low++;
            }

            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};
