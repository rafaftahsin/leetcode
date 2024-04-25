//
// Created by rafaf.tahsin on 4/25/24.
//

#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "78.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(test_suite_78)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<int > nums {1,2,3};

        vector<vector<int>> result = sol.subsets(nums);
        vector<vector<int>> expected = { {}, {1}, {2}, {1,2} , {3}, {1,3}, {2,3}, {1,2,3} };



        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()