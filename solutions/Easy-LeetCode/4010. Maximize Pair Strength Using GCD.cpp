class Solution
{
public:
    long long maxPairStrength(vector<int> &nums)
    {
        int n = nums.size();
        long long ans = LLONG_MIN;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long prod = 1LL * nums[i] * nums[j];
                long long GCD = gcd(nums[i], nums[j]);
                GCD *= GCD;
                ans = max(ans, prod / GCD);
            }
        }
        return ans;
    }
};