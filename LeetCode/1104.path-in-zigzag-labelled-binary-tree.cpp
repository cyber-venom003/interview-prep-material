/*
 * @lc app=leetcode id=1104 lang=cpp
 *
 * [1104] Path In Zigzag Labelled Binary Tree
 */

// @lc code=start
class Solution {
public:
    bool isPowerTwo(long long n){
        return ((n - 1)&n) == 0;
    }
    int getLevelStart(long long n){
        while(!isPowerTwo(n)){
            n++;
        }
        return n/2;
    }
    int getParent(int n){
        if(isPowerTwo(n)){
            return n - 1;
        } else {
            int level_start = getLevelStart(n);
            int difference = (n - level_start)/2;
            return level_start - 1 - difference;
        }
    }
    vector<int> pathInZigZagTree(int label) {
        vector<int> result;
        result.push_back(label);
        while(label != 1){
            int parent = getParent(label);
            result.push_back(parent);
            label = parent;
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
// @lc code=end

