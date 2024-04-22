//
// Created by rafaf.tahsin on 4/21/24.
//

#ifndef LEETCODE_36_H
#define LEETCODE_36_H

#endif //LEETCODE_36_H

#include "unordered_set"

using namespace std;

namespace leetcode36 {
    class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {

            vector<unordered_set<char>> row_set(9);
            vector<unordered_set<char>> col_set(9);
            vector<unordered_set<char>> box_set(9);

            for( int i=0; i<board.size(); i++) {

                for (int j = 0; j < board[i].size(); j++) {
                    char curr = board[i][j];

                    if (curr != '.') {
                        int box_index = (i/3) * 3 + (j/3);

                        if (row_set[i].count(curr) || col_set[j].count(curr) || box_set[box_index].count(curr)) {
                            return false;
                        }

                        box_set[box_index].insert(curr);
                        row_set[i].insert(curr);
                        col_set[j].insert(curr);

                    }
                }
            }

            return true;
        }
    };
}
