class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> freq(26, 0);

        // frequency array
        for (int i = 0; i < word.size(); i++)
        {
            freq[word[i] - 'a']++;
        }

        int pushes = 0;
        int cnt = 0;
        int cost = 1;

        sort(freq.begin(), freq.end());

        for (int i = 25; i >= 0; i--)
        {
            // if frequency is == 0 , then everything will be 0
            if (freq[i] == 0)
            {
                break;
            }

            pushes += freq[i] * cost;
            cnt++;
            // to increse the cost id we have entered 8 different type of character then increase the cost by one
            if (cnt % 8 == 0)
            {
                cost++;
            }
        }
        return pushes;
    }
};