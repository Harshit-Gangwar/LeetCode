class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int first = m - 1;
        int second = n - 1;
        int index = m + n - 1;

        while (first >= 0 && second >= 0)
        {
            if (nums1[first] > nums2[second])
            {
                nums1[index] = nums1[first];
                first--;
            }
            else
            {
                nums1[index] = nums2[second];
                second--;
            }

            index--;
        }

        // If nums2 still has elements
        while (second >= 0)
        {
            nums1[index] = nums2[second];
            second--;
            index--;
        }
    }
};