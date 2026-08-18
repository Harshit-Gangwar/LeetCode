class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int val = *min_element(nums.begin(), nums.end());
        return val;
    }
};