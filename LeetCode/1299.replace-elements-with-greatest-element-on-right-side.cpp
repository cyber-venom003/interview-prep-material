/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1){
            return {-1};
        }
        int max_so_far = -1;
        for(int i = arr.size() - 1 ; i >= 1 ; --i){
            int current = arr[i - 1];
            arr[i - 1] = max(arr[i] , max_so_far);
            max_so_far = current;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
// @lc code=end

