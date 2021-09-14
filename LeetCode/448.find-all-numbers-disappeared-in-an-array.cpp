/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < nums.size() ; ++i){
            int number = abs(nums[i]);
            nums[number - 1] = -abs(nums[number - 1]);
        }
        vector<int> answer;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i] > 0){
                answer.push_back(i + 1);
            }
        }
        return answer;
    }
};
// @lc code=end

