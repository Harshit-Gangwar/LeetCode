class Solution
{
public:
    int minimumPushes(string word)
    {
        int k = word.length();
        if (k <= 8)
        {
            return k;
        }
        else if (k <= 16)
        {
            return 8 + (k - 8) * 2;
        }
        else if (k <= 24)
        {
            return 8 + 16 + (k - 16) * 3;
        }
        else
        {
            return 8 + 16 + 24 + (k - 24) * 4;
        }
    }
};