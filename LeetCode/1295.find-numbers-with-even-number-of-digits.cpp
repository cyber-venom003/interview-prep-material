/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int is_even_length_number = 0;
        for(int i = 0 ; i < nums.size() ; ++i){
            string number = to_string(nums[i]);
            if(number.length()%2 == 0){
                is_even_length_number++;
            }
        }
        return is_even_length_number;
    }
};
// @lc code=end

