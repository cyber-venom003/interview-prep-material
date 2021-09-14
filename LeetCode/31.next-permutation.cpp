/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& number) {
        int i = 0;
        for(i = number.size() - 1 ; i > 0; i--){
            if(number[i] > number[i - 1]){
                break;
            }
        }
        if(i == 0){     
            reverse(number.begin() , number.end());
        } else {
            int x = number[i - 1], small = i;
            for(int j = i + 1; j < number.size(); j++){
                if(number[j] > x && number[j] <= number[small]){
                    small = j;
                }
            }
            
            swap(number[i - 1] , number[small]);

            sort(number.begin() + i, number.end());
        }
    }
};
// @lc code=end

