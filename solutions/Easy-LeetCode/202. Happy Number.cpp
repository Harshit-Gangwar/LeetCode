class Solution
{
public:
    int fun(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int rem = n % 10;
            sum += rem * rem;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        int slow = n;
        int fast = n;
        // If the number is not happy then it will stuck in the loop of square sum
        while (true)
        {
            slow = fun(slow);
            fast = fun(fun(fast));

            if (fast == 1)
                return true;

            if (slow == fast && slow != 1)
                return false;
        }
    }
};