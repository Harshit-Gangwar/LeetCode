class Solution
{
public:
    int maximumSum(vector<int> &arr)
    {
        int n = arr.size();

        int keep = arr[0]; // no deletion
        int del = 0;       // one deletion used
        int ans = arr[0];

        for (int i = 1; i < n; i++)
        {
            del = max(keep, del + arr[i]);
            keep = max(arr[i], keep + arr[i]);
            ans = max(ans, max(keep, del));
        }

        return ans;
    }
};