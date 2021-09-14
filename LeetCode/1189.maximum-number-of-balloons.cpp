/*
 * @lc app=leetcode id=1189 lang=cpp
 *
 * [1189] Maximum Number of Balloons
 */

// @lc code=start
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char , int> hashMap;
        for(int i = 0 ; i < text.length() ; ++i){
            if(hashMap.find(text[i]) == hashMap.end()){
                hashMap[text[i]] = 1;
            } else {
                hashMap[text[i]]++;
            }
        }
        int count = 0;
        string balloon = "";
        while(hashMap['b'] && hashMap['a'] && hashMap['l'] && hashMap['o'] && hashMap['n']){
            balloon = "";
            if(hashMap['b'] - 1 >= 0){
                hashMap['b'] = hashMap['b'] - 1;  
                balloon += 'b';
            }
            if(hashMap['a'] - 1 >= 0){
                hashMap['a'] = hashMap['a'] - 1;   
                balloon += 'a';
            }
            if(hashMap['l'] - 2 >= 0){
                hashMap['l'] = hashMap['l'] - 2; 
                balloon += 'l';
                balloon += 'l';
            }
            if(hashMap['o'] - 2 >= 0){
                hashMap['o'] = hashMap['o'] - 2; 
                balloon += 'o';
                balloon += 'o';
            }
            if(hashMap['n'] - 1 >= 0){
                hashMap['n'] = hashMap['n'] - 1;   
                balloon += 'n';
            }
            if(balloon == "balloon"){
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

