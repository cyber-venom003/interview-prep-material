/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int memoization(int index , vector<int>& prices , int hold , vector<vector<int>>& dp){
        if(index >= prices.size()){
            return 0;
        }
        if(dp[index][hold] != -1){
            return dp[index][hold];
        }
        if(hold){
            return dp[index][hold] = max(memoization(index + 1 , prices , !hold , dp) - prices[index] , memoization(index + 1 , prices , hold , dp));
        } else {
            return dp[index][hold] = max(memoization(index + 1 , prices , !hold , dp) + prices[index] , memoization(index + 1 , prices , hold , dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){
            return 0;
        }
        vector<vector<int>> dp(prices.size() + 1 , vector<int>(2 , -1));
        return memoization(0 , prices , 1 , dp);
    }
};
// @lc code=end

