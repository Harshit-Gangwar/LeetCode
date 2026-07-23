class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {

        int low = 0;
        unordered_map<char, int> mp;
        int res = INT_MIN;

        for (int high = 0; high < s.size(); high++)
        {

            mp[s[high]]++;
            // THIS LINE FIRSTLY INSERTING CHARACTER INTO THE MAP THEN IT SIMPLY INCREASIG IT FREQUENCY
            while (mp.size() > k)
            {

                mp[s[low]]--;

                if (mp[s[low]] == 0)
                {
                    mp.erase(s[low]); // <-- Fixed
                }

                low++;
            }

            if (mp.size() == k)
            {
                int len = high - low + 1;
                res = max(res, len);
            }
        }

        return (res == INT_MIN) ? -1 : res;
        //(CONDITION) ? IF FALSE : IF TRUE ;
    }
};