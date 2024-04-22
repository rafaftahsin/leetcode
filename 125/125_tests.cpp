//
// Created by rafaf.tahsin on 4/22/24.
//
#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "125.h"

BOOST_AUTO_TEST_SUITE(test_suite)

    leetcode125::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        string s = "A man, a plan, a canal: Panama";

        bool result = sol.isPalindrome(s);
        bool expected = true;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        string s = "race a car";

        bool result = sol.isPalindrome(s);
        bool expected = false;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        string s = " ";

        bool result = sol.isPalindrome(s);
        bool expected = true;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()