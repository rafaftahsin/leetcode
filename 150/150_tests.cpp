#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "150.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(test_suite_150)

    leetcode150::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<string> tokens {"2","1","+","3","*"};

        int result = sol.evalRPN(tokens);
        int expected = 9;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<string> tokens {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};

        int result = sol.evalRPN(tokens);
        int expected = 22;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()