#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "149.h"

BOOST_AUTO_TEST_SUITE(test_suite_49)

    leetcode149::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<vector<int>> points { {1,1}, {3,2}, {5,3}, {4,1}, {2,3}, {1,4} };

        int result = sol.maxPoints(points);
        int expected = 4;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()