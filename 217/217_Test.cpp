#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "217.h"


BOOST_AUTO_TEST_SUITE(test_suite_217)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        std::vector<int>nums = {1,2,3,1};

        int result = sol.containsDuplicate(nums);

        BOOST_CHECK_EQUAL(true, result);
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        std::vector<int>nums = {1,2,3,4};

        int result = sol.containsDuplicate(nums);

        BOOST_CHECK_EQUAL(false, result);
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        std::vector<int>nums = {1,1,1,3,3,4,3,2,4,2};

        int result = sol.containsDuplicate(nums);

        BOOST_CHECK_EQUAL(true, result);
    }
BOOST_AUTO_TEST_SUITE_END()