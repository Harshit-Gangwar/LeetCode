class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int val = INT_MIN;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > val)
            {
                ans = i;
                val = nums[i];
            }
        }
        return ans;
    }
};