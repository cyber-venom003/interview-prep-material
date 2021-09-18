/*
 * @lc app=leetcode id=917 lang=cpp
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int low = 0 , high = s.length() - 1;
        while(low < high){
            is(!isalpha(s[low])){
                low++;
            } else if(!isalpha(s[high])){
                high--;
            } else {
                swap(s[low] , s[high]);
                low++;
                high--;
            }
        }
        return s;
    }
};
// @lc code=end

