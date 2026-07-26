class Solution
{
public:
    int largestInteger(int n, int s)
    {
        int cnt = 0;
        int temp = s;

        if (s == 0)
        {
            return 0;
        }

        if (s > 9 * n)
        {
            return -1;
        }

        int max_num = 0;

        for (int i = 0; i < n; i++)
        {
            int num = min(s, 9);
            s -= num;
            max_num = max_num * 10 + num;
        }
        return max_num;
    }
};