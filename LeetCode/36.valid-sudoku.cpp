/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row_hash[9][9] = {0};
        int column_hash[9][9] = {0};
        int block_hash[3][3][9] = {0};

        for(int i = 0 ; i < board.size() ; ++i){
            for(int j = 0 ; j < board[0].size() ; ++j){
                if(board[i][j] != '.'){
                    int number = board[i][j] - '0' - 1;
                    if(row_hash[i][number]++){      // If number appeared in ith row more than once
                        return false;
                    }
                    if(column_hash[j][number]++){   // If number appeared in jth column more than once
                        return false;
                    }
                    if(block_hash[i/3][j/3][number]++){ // If number appeared in i/3 , j/3 block more than once
                        return false;
                    }
                }
            }
        }
        return true;       //Nothing is repeated according to rules, sudoku is valid.
    }
};
// @lc code=end

