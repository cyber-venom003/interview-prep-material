/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int distincts = 1;
        int current = nums[0];
        for(int i = 1 ; i < nums.size() ; ++i){
            if(current == nums[i]){
                nums[i] = INT_MAX;
            } else {
                distincts++;
                current = nums[i];
            }
        }
        sort(nums.begin() , nums.end());
        return distincts;
    }
};
// @lc code=end

