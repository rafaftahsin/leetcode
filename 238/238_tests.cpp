//
// Created by rafaf.tahsin on 4/17/24.
//

#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "238.h"

BOOST_AUTO_TEST_SUITE(test_suite)

    leetcode238::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<int>nums {1,2,3,4};

        vector<int> result = sol.productExceptSelf(nums);
        vector<int> expected { 24,12,8,6 };

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<int>nums {-1,1,0,-3,3};

        vector<int> result = sol.productExceptSelf(nums);
        vector<int> expected { 0,0,9,0,0 };

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()