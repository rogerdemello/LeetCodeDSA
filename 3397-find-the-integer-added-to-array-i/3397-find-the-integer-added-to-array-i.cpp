class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        ranges::sort(nums1);
        ranges::sort(nums2);

        return nums2[0]-nums1[0];
    }
};