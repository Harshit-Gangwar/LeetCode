class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        // Stores the last index of each character encountered.
        // Key   -> Character
        // Value -> Last index where the character appeared
        unordered_map<char, int> mp;
        int low = 0;

        // Stores the maximum length of a substring without repeating characters.
        int ans = 0;

        for (int high = 0; high < s.size(); high++)
        {

            // Check if the current character has appeared before
            // AND its previous occurrence lies inside the current window.
            if (mp.count(s[high]) && mp[s[high]] >= low)
            {

                // Move the left boundary just after the previous occurrence
                // of the duplicate character.
                low = mp[s[high]] + 1;
            }

            // Update the latest index of the current character.
            mp[s[high]] = high;

            // Calculate the current window length and update the answer.
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};