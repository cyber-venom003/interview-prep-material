/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i = 1 ; i <= n ; ++i){
            if(i%15 == 0){
                answer.push_back("FizzBuzz");
            } else if(i%5 == 0){
                answer.push_back("Buzz");
            } else if(i%3 == 0){
                answer.push_back("Fizz");
            } else {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};
// @lc code=end

