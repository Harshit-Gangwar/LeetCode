class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        int one = 0;
        int zero = 0;
        unordered_map<int, int> mp; // cdiff , index
        int res = 0;
        int len = 0;

        // If total number of 1 and 0 present in the subarray is equal then their difference will be 0 .

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
            int diff = zero - one;
            if (diff == 0)
            {
                res = max(res, i + 1);
                continue;
            }

            if (mp.find(diff) != mp.end())
            {
                /* Because we want the largest subarray so we are not going to update the found index with previous differences .*/
                len = i - mp[diff]; // found index at which we get one of the previous differences - previous index of that difference .
                res = max(res, len);
            }
            else
            {
                mp[diff] = i;
            }
        }
        return res;
    }
};