class Solution
{
public:
    long long countSubarrays(vector<int> &nums, long long k)
    {

        long long ans = 0;
        long long sum = 0;

        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {

            // Include current element
            sum += nums[right];

            // Shrink the window until score becomes < k
            while (sum * (right - left + 1LL) >= k)
            {
                sum -= nums[left];
                left++;
            }

            // Every subarray ending at right is valid
            ans += (right - left + 1);
        }

        return ans;
    }
};