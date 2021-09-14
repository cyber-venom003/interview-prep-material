/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0 , k = 0;
        for(start = 0 ; start < nums.size() ; ++start){
            if(nums[start] != val){
                nums[k] = nums[start];
                k++;
            }
        }
        return k;
    }
};
// @lc code=end

