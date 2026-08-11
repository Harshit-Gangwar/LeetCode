class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int left = 0;
        int total = 0;
        int right = 0;

        for (auto x : nums)
        {
            total += x;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            right = total - left - nums[i];

            if (left == right)
            {
                return i;
            }

            left += nums[i];
        }
        return -1;
    }
};