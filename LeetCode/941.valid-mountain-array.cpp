/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }
        int start = 0 , end = arr.size() - 1;
        while(start < arr.size() && arr[start] < arr[start + 1]){
            start++;
        }
        while(end > 0 && arr[end] < arr[end - 1]){
            end--;
        }
        if(start == end && (start != arr.size() - 1 && end != 0)){
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

