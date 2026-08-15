class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int Pos = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                if (Pos != i)
                {
                    swap(nums[Pos], nums[i]);
                }
                Pos++;
            }
        }
    }
};