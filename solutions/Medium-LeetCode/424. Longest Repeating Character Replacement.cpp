class Solution
{
public:
    int characterReplacement(string s, int k)
    {

        unordered_map<char, int> mp;
        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++)
        {

            mp[s[right]]++;

            // Update the maximum frequency character
            maxFreq = max(maxFreq, mp[s[right]]);
            int windowSize = right - left + 1;

            // If replacements needed are greater than k,
            // shrink the window from the left
            // Replacements needed =
            // window size - frequency of the most common character
            while (windowSize - maxFreq > k)
            {
                // Remove the leftmost character
                mp[s[left]]--;
                // Move the left pointer forward
                left++;
                // Update the new window size
                windowSize = right - left + 1;
            }

            // Update the maximum valid window length
            ans = max(ans, windowSize);
        }
        return ans;
    }
};