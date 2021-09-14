/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , pair<int , int>> hashMap;
        for(int i = 0 ; i < s.length() ; ++i){
            if(hashMap.find(s[i]) != hashMap.end()){
                hashMap[s[i]].first += 1;
            } else {
                hashMap[s[i]] = make_pair(1 , i);
            }
        }
        int answer = INT_MAX;
        for(auto it : hashMap){
            if(it.second.first == 1){
                answer = min(answer , it.second.second);
            }
        }
        if(answer == INT_MAX){
            return -1;
        } else {
            return answer;
        }
    }
};
// @lc code=end

