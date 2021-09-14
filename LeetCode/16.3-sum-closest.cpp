/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3){
            return 0;
        }
        int sum = 0 , distance = INT_MAX;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() - 2 ; ++i){
            int low = i + 1 , high = nums.size() - 1;
            while(low < high){
                int current_sum = nums[i] + nums[low] + nums[high];
                int difference = abs(current_sum - target);
                if(difference == 0){
                    return current_sum;
                }
                if(difference < distance){
                    distance = difference;
                    sum = current_sum;
                } else if(current_sum > target){
                    high--;
                } else {
                    low++;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

