class Solution
{
public:
    int solve(vector<int> &nums, int left, int right)
    {

        // Only one element left
        if (left == right)
            return nums[left];

        // Pick left or right
        int pickLeft = nums[left] - solve(nums, left + 1, right);
        int pickRight = nums[right] - solve(nums, left, right - 1);

        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int> &nums)
    {

        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};
