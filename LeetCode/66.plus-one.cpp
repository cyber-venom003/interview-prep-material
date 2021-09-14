/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin() , digits.end());
        digits[0] += 1;
        if(digits[0] <= 9){
            reverse(digits.begin() , digits.end());
            return digits;
        } else {
            int carry = digits[0]/10;
            digits[0] %= 10;
            int i = 1;
            while(carry != 0 && i < digits.size()){
                digits[i] += carry;
                carry = digits[i]/10;
                if(digits[i] >= 10){
                    digits[i] %= 10;
                }
                i++;
            }
            if(i == digits.size() && carry != 0){
                digits.push_back(carry);
            }
            reverse(digits.begin() , digits.end());
            return digits;
        }
    }
};
// @lc code=end

