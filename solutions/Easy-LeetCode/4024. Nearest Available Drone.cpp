class Solution
{
public:
    int nearestDrone(vector<vector<int>> &drones, vector<int> &target)
    {
        int n = drones.size();
        int m = drones[0].size();
        long long ans = -1;
        long long min_range = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            long long range = 1LL * abs(drones[i][0] - target[0]) + 1LL * abs(drones[i][1] - target[1]);

            if (range <= drones[i][2])
            {
                if (range < min_range)
                {
                    ans = i;
                    min_range = range;
                }
            }
        }
        return ans;
    }
};