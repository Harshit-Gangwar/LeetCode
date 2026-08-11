class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0];
        int n = prices.size();
        int sale = 0;

        /*Treat each day as a saling day if saling day has a greter price than the price of buying then sell
        and add the profit . Else if the selling day has a cheaper price than buy on that day .*/
        for (int i = 1; i < n; i++)
        {
            if (buy > prices[i])
            {
                buy = prices[i];
            }
            else
            {
                sale += prices[i] - buy;
                buy = prices[i];
            }
        }
        return sale;
    }
};