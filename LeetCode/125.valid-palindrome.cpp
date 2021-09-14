/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0 ; i < s.length() ; ++i){
            if((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9')){
                s.erase(i , 1);
                i--;
            }
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int low = 0 , high = s.length() - 1;
        while(low <= high){
            if(s[low] != s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
// @lc code=end

