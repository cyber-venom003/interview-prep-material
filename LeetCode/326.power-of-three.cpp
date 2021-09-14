/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1){
            return true;
        }
        if(n <= 0){
            return false;
        }
        long long power = ceil(log(n)/log(3));
        long long x = pow(3 , power);
        return n == x;
    }
};
// @lc code=end

