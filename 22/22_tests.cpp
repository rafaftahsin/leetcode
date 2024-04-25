//
// Created by rafaf.tahsin on 4/24/24.
//
#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "22.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(test_suite_22)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        int n = 1;

        vector <string> result = sol.generateParenthesis(n);
        vector <string> expected {"()"};

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        int n = 3;

        vector <string> result = sol.generateParenthesis(n);
        sort(result.begin(), result.end());
        vector <string> expected { "((()))","(()())","(())()","()(())","()()()" };
        sort(expected.begin(), expected.end());

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        int n = 4;

        vector <string> result = sol.generateParenthesis(n);
        sort(result.begin(), result.end());
        vector <string> expected { "(((())))","((()()))","((())())","((()))()","(()(()))","(()()())","(()())()","(())(())","(())()()","()((()))","()(()())","()(())()","()()(())","()()()()" };
        sort(expected.begin(), expected.end());

        BOOST_TEST( result == expected );
    }

BOOST_AUTO_TEST_SUITE_END()