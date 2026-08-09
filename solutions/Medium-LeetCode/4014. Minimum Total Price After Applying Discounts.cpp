class Solution
{
public:
    double minPrice(vector<int> &prices, vector<int> &discounts)
    {
        int size = discounts.size();
        int n = prices.size();
        double ans = 0;
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());

        int k = min(size, n);

        for (int i = 0; i < k; i++)
        {
            int price = prices[n - 1 - i];
            int discount = discounts[size - 1 - i];

            ans += (price * (100.00000 - discount)) / 100.00000;
        }

        for (int i = 0; i < n - k; i++)
        {
            ans += prices[i];
        }
        return ans;
    }
};