class Solution
{
public:
    int smallestSumSubarray(vector<int> &arr)
    {
        int ans = arr[0];
        int best_end = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            int v1 = arr[i];
            int v2 = best_end +
                     arr[i];

            best_end = min(v1, v2);
            ans = min(ans, best_end);
        }
        return ans;
    }
};
