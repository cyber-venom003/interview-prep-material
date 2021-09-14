/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr1 = m - 1 , ptr2 = n - 1 , indexing = m + n - 1;
        while(ptr1 >= 0 || ptr2 >= 0){
            if(ptr2 < 0 || (ptr1 >= 0 && nums1[ptr1] > nums2[ptr2])){
                nums1[indexing--] = nums1[ptr1--];
            } else {
                nums1[indexing--] = nums2[ptr2--];
            }
        }
    }
};
// @lc code=end

