class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int sum = 0;
        int ans = 0;
        int low = 0;

        // First window
        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        if (sum / k >= threshold)
        {
            ans++;
        }

        // Remaining windows
        for (int high = k; high < arr.size(); high++)
        {
            sum += arr[high] - arr[low];
            low++;

            if (sum / k >= threshold)
            {
                ans++;
            }
        }

        return ans;
    }
};