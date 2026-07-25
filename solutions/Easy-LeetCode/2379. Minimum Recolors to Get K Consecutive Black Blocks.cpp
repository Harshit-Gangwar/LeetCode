class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int low = 0;
        int cnt = 0;

        // Count white blocks in the first window
        for (int i = 0; i < k; i++)
        {
            if (blocks[i] == 'W')
                cnt++;
        }

        int ans = cnt;

        // Slide the window
        for (int high = k; high < blocks.size(); high++)
        {

            if (blocks[high] == 'W')
                cnt++;

            if (blocks[low] == 'W')
                cnt--;

            low++;

            ans = min(ans, cnt);
        }

        return ans;
    }
};