/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        string word = "";
        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] == ' '){
                if(word.length() > 0){
                    words.push_back(word);
                    word.clear();
                    continue;
                }
            } else {
                word += s[i];
                continue;
            }
        }
        if(word.length() > 0){
            words.push_back(word);
        }
        return words[words.size() - 1].length();
    }
};
// @lc code=end

