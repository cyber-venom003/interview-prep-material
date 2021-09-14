/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        if(haystack.length() == needle.length()){
            if(haystack == needle){
                return 0;
            } else {
                return -1;
            }
        } else {
            int window_size = needle.length();
            int end = 0 , answer = -1;
            while(end < haystack.length()){
                if(haystack.substr(end , window_size) == needle){
                    answer = end;
                    break;
                }
                end++;
            }
            return answer;
        }
    }
};
// @lc code=end

