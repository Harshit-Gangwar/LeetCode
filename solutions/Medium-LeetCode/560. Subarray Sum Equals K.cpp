class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;

        // Stores the frequency of each prefix sum we have seen.
        unordered_map<int, int> mp;

        // A prefix sum of 0 exists once before we start.
        // This handles subarrays that start from index 0.
        mp[0] = 1;

        for (int i = 0; i < n; i++)
        {

            // Calculate the prefix sum up to the current index.
            sum += nums[i];

            /*
                Suppose the current prefix sum is 'sum'.

                We want a subarray whose sum is k.

                If an earlier prefix sum was (sum - k), then:

                    sum - (sum - k) = k

                Therefore, every previous occurrence of (sum - k)
                represents one subarray ending at the current index
                whose sum is exactly k.
            */
            if (mp.find(sum - k) != mp.end())
            {

                // Add the number of times (sum - k) has appeared.
                // Each occurrence gives us one valid subarray.
                cnt += mp[sum - k];
            }

            // Store the current prefix sum for future subarrays.
            mp[sum]++;
        }

        return cnt;
    }
};
