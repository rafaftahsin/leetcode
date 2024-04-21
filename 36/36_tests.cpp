#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "36.h"

BOOST_AUTO_TEST_SUITE(tests)

    leetcode36::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<vector<char>> board {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
        };

        bool result = sol.isValidSudoku(board);
        bool expected = true;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<vector<char>> board {
                {'8','3','.','.','7','.','.','.','.'},
                {'6','.','.','1','9','5','.','.','.'},
                {'.','9','8','.','.','.','.','6','.'},
                {'8','.','.','.','6','.','.','.','3'},
                {'4','.','.','8','.','3','.','.','1'},
                {'7','.','.','.','2','.','.','.','6'},
                {'.','6','.','.','.','.','2','8','.'},
                {'.','.','.','4','1','9','.','.','5'},
                {'.','.','.','.','8','.','.','7','9'}
        };

        bool result = sol.isValidSudoku(board);
        bool expected = false;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()