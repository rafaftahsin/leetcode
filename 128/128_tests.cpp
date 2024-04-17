#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "128.h"

BOOST_AUTO_TEST_SUITE(test_suite)

    leetcode128::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<int> nums { 100,4,200,1,3,2 };

        int result = sol.longestConsecutive(nums);
        int expected = 4;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<int> nums { 0,3,7,2,5,8,4,6,0,1 };

        int result = sol.longestConsecutive(nums);
        int expected = 9;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        vector<int> nums {};

        int result = sol.longestConsecutive(nums);
        int expected = 0;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_4)
    {
        vector<int> nums { 0, -1 };

        int result = sol.longestConsecutive(nums);
        int expected = 2;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_5)
    {
        vector<int> nums { 1, 1, 1 };

        int result = sol.longestConsecutive(nums);
        int expected = 1;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_6)
    {
        vector<int> nums { 1,2,0,1 };

        int result = sol.longestConsecutive(nums);
        int expected = 3;

        BOOST_TEST( result == expected );
    }

BOOST_AUTO_TEST_SUITE_END()