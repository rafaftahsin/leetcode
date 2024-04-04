//
// Created by rafaf.tahsin on 2/4/24.
//

//#include "boost/test/unit_test.hpp"

#define BOOST_TEST_MAIN
//#define BOOST_TEST_DYN_LINK

#include "boost/test/included/unit_test.hpp"
#include "217.h"


BOOST_AUTO_TEST_SUITE(test_suite_1)
    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        std::vector<int>nums = {1,2,3,1};

        int result = Solution::containsDuplicate(nums);

        BOOST_CHECK_EQUAL(true, result);
    }
BOOST_AUTO_TEST_SUITE_END()