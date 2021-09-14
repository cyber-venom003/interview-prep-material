/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = INT_MIN;
        int ones_count = 0;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i]){
                ones_count++;
            } else {
                max_ones = max(max_ones , ones_count);
                ones_count = 0;
            }
        }
        max_ones = max(max_ones , ones_count);
        return max_ones;
    }
};
// @lc code=end

