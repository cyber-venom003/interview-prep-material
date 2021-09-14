/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int , int> hashMap;
        for(int i = 0 ; i < arr.size() ; ++i){
            if(hashMap.find(arr[i]*2) != hashMap.end()){
                return true;
            }
            if(arr[i]%2 == 0){
                if(hashMap.find(arr[i]/2) != hashMap.end()){
                    return true;
                }
            }
            hashMap[arr[i]] = 1;
        }
        return false;
    }
};
// @lc code=end

