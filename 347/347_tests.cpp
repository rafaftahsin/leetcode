#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "347.h"

BOOST_AUTO_TEST_SUITE(test_suite_347)

    leetcode347::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<int> nums { 1,1,1,2,2,3 };
        int k = 2;

        vector<int>result = sol.topKFrequent(nums,k);

        vector<int>expected { 1,2 };

        BOOST_TEST( result == expected );
    }

BOOST_AUTO_TEST_SUITE_END()