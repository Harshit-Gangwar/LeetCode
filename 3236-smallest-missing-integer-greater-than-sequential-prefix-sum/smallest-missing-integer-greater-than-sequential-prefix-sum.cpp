class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];

        int i = 1;
        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }

        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(sum)){
            sum++;
// if sum is in the array than add one in sum thsan again check in the set is the sum present or not
       }
       return sum ;
    }
};