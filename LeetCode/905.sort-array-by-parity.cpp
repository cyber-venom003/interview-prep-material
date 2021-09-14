/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int start = 0 , end = arr.size() - 1;
        while(start < end){
            if(arr[start]%2 != 0 && arr[end]%2 == 0){
                swap(arr[start] , arr[end]);
                start++;
                end--;
            } else {
                if(arr[start]%2 == 0){
                    start++;
                }
                if(arr[end]%2 != 0){
                    end--;
                }
            }
        }
        return arr;
    }
};
// @lc code=end

