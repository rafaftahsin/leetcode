#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "1.h"


BOOST_AUTO_TEST_SUITE(test_suite_1)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        std::vector<int>nums {2,7,11,15};
        int target = 9;
        std::vector<int> expected {0,1};

        std::vector<int> result = sol.twoSum(nums, target);

        std::sort(result.begin(), result.end());
        std::sort(expected.begin(), expected.end());

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        std::vector<int>nums {3,2,4};
        int target = 6;
        std::vector<int> expected {1,2};

        std::vector<int> result = sol.twoSum(nums, target);

        std::sort(result.begin(), result.end());
        std::sort(expected.begin(), expected.end());

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        std::vector<int>nums {3,3};
        int target = 6;
        std::vector<int> expected {0,1};

        std::vector<int> result = sol.twoSum(nums, target);

        std::sort(result.begin(), result.end());
        std::sort(expected.begin(), expected.end());

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()