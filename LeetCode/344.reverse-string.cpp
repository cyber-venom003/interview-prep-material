/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0 , high = s.size() - 1;
        while(low <= high){
            swap(s[low] , s[high]);
            low++;
            high--;
        }
    }
};
// @lc code=end

