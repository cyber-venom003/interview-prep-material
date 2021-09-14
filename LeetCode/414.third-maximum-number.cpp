/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int , greater<int>> uniques;
        for(int i = 0 ; i < nums.size() ; ++i){
            uniques.insert(nums[i]);
        }
        int i = 0 , answer = INT_MIN;
        for(auto& it : uniques){
            if(i == 2){
                return it;
            }
            i++;
            answer = max(answer , it);
        }
        return answer;
    }
};
// @lc code=end

