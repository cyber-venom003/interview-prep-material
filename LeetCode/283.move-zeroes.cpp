/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i]){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};
// @lc code=end

