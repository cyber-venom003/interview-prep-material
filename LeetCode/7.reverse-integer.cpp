/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int sign = x >= 0 ? 1 : -1;
        long long number = 0;
        long long t = abs(x);
        vector<int> digits;
        while(t != 0){
            int digit = t%10;
            digits.push_back(digit);
            t = t/10;
        }
        for(int i = 0 ; i < digits.size() ; ++i){
            if(number >= INT_MAX){
                return 0;
            } else {
                number += digits[i]*pow(10 , digits.size() - i - 1);    
            }
        }
        if(sign == -1 && number*sign <= INT_MIN){
            return 0;
        } else {
            return number*sign;
        }
    }
};
// @lc code=end

