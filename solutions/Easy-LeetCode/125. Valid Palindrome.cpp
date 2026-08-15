class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                // if the character is not a number or an alphabte than increse the start .
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--;
                // if the character is not a number or an alphabte than decrese the end .
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};