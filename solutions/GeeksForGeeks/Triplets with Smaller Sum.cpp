class Solution
{
public:
    int countTriplets(int sum, vector<int> &arr)
    {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        int cnt = 0;

        for (int i = 0; i < n - 2; i++)
        {

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {

                int add = arr[i] + arr[j] + arr[k];

                if (add < sum)
                {
                    cnt += (k - j);
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return cnt;
    }
};