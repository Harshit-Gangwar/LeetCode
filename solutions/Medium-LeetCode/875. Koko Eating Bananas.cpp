class Solution
{
public:
    // calculate total hours
    long long totalHours(vector<int> &piles, int speed)
    {
        long total = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            total += (piles[i] + speed - 1) / speed;
        }
        return total;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int mini = 1;
        int maxi = *max_element(piles.begin(), piles.end());

        while (mini <= maxi)
        {
            int mid = mini + (maxi - mini) / 2;
            long long totalHrs = totalHours(piles, mid);

            if (totalHrs <= h)
            {
                maxi = mid - 1;
            }
            else
            {
                mini = mid + 1;
            }
        }
        return mini;
    }
};