class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int left = 0;
        int ans = INT_MIN;
        int t = 0;
        int f = 0;

        for (int right = 0; right < answerKey.size(); right++)
        {
            if (answerKey[right] == 'T')
            {
                t++;
            }
            else
            {
                f++;
            }
            int mn = min(t, f);
            while (k < mn)
            {
                // when the minimum freq from the both characters is greater than k then check the character decrease it's freq and increase the left
                if (answerKey[left] == 'T')
                {
                    t--;
                }
                else
                {
                    f--;
                }
                mn = min(t, f);
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};