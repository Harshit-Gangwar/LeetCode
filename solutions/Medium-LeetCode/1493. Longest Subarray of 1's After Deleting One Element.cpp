class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int low = 0;
        int ans = 0;

        for (int high = 0; high < nums.size(); high++)
        {
            mp[nums[high]]++;

            while (mp[0] > 1)
            {
                mp[nums[low]]--;
                low++;
            }
            ans = max(high - low, ans);
        }
        return ans;
    }
};