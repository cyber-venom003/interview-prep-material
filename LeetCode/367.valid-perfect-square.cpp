/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        if(num < 4){
            return false;
        }
        if(num == 4){
            return true;
        }
        long long start = 2 , end = num/2;
        while(start <= end){
            long long mid = start + (end - start)/2;
            if(mid*mid == num){
                return true;
            } else if(mid*mid < num){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};
// @lc code=end

