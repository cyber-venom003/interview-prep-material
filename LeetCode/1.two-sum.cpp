/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> hashMap;
        vector<int> result;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(hashMap.find(nums[i]) != hashMap.end()){
                result.push_back(hashMap[nums[i]]);
                result.push_back(i);
                break;
            } else {
                hashMap[target - nums[i]] = i;
            }
        }
        return result;
    }
};
// @lc code=end

