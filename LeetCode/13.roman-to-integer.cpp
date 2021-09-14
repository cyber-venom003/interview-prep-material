/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int> roman_values;
        roman_values['I'] = 1;
        roman_values['V'] = 5;
        roman_values['X'] = 10;
        roman_values['L'] = 50;
        roman_values['C'] = 100;
        roman_values['D'] = 500;
        roman_values['M'] = 1000;
        int number = 0;
        for(int i = 0 ; i < s.length() ; ++i){
            if(roman_values[s[i]] >= roman_values[s[i + 1]]){
                number += roman_values[s[i]];
            }
            if(roman_values[s[i]] < roman_values[s[i + 1]]){
                number += roman_values[s[i + 1]] - roman_values[s[i]];
                i++;
            }
        }
        return number;
    }
};
// @lc code=end

