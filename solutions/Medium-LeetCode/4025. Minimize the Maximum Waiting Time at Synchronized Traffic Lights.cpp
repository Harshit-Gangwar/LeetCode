class Solution
{
public:
    int minPenalty(int period, vector<int> &lights, vector<int> &arrivalTime)
    {
        int n = arrivalTime.size();
        int max_green = *max_element(lights.begin(), lights.end());
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int rem = arrivalTime[i] % period;

            if (rem >= max_green)
            {
                ans = max(ans, period - rem);
            }
        }
        return ans;
    }
};