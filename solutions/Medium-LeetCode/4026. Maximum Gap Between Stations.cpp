class Solution
{
public:
    int maximumGap(string skill, string station)
    {
        int n = skill.size();
        int m = station.size();

        if (n == 1)
            return 0;

        vector<int> forward(n);
        vector<int> backward(n);

        // Earliest possible position for each worker
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            while (station[j] != skill[i])
            {
                j++;
            }

            forward[i] = j;
            j++;
        }

        // Latest possible position for each worker
        j = m - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            while (station[j] != skill[i])
            {
                j--;
            }

            backward[i] = j;
            j--;
        }

        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, backward[i] - forward[i - 1]);
        }

        return ans;
    }
};