/*
 * @lc app=leetcode id=1629 lang=cpp
 *
 * [1629] Slowest Key
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        map<char , int> maxHashMap;
        maxHashMap[keysPressed[0]] = releaseTimes[0];
        int maxDuration = releaseTimes[0];
        for(int i = 1 ; i < releaseTimes.size() ; ++i){
            if(maxHashMap.find(keysPressed[i]) != maxHashMap.end()){
                maxHashMap[keysPressed[i]] = max(maxHashMap[keysPressed[i]] , releaseTimes[i] - releaseTimes[i - 1]);
            } else {
                maxHashMap[keysPressed[i]] = releaseTimes[i] - releaseTimes[i - 1];
            }
            maxDuration = max(maxDuration , releaseTimes[i] - releaseTimes[i - 1]);
        }
        vector<char> candidates;
        for(auto it : maxHashMap){
            if(it.second == maxDuration){
                candidates.push_back(it.first);
            }
        }
        return candidates[candidates.size() - 1];
    }
};
// @lc code=end

