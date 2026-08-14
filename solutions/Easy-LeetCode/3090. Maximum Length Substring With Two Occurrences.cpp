class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        unordered_map<char, int> mp;
        int low = 0;
        int res = 0;

        for (int high = 0; high < s.size(); high++)
        {
            mp[s[high]]++;

            // If any character occurs more than twice,
            // shrink the window from the left.
            while (mp[s[high]] > 2)
            {
                mp[s[low]]--;
                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};