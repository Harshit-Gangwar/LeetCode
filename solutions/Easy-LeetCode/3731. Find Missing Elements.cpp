class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        if (nums.empty())
            return {};

        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());

        unordered_set<int> present(nums.begin(), nums.end());

        vector<int> ans;
        // if the number is not present in the set of numbers than add it to the answer
        for (int i = low; i <= high; i++)
        {
            if (present.find(i) == present.end())
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};