/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0){
                arr.emplace(arr.begin() + i , 0);
                i++;
            }
        }
        arr.resize(n);
    }
};
// @lc code=end

