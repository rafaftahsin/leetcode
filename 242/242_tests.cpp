#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "242.h"


BOOST_AUTO_TEST_SUITE(test_suite_242)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        std::string s = "anagram";
        std::string t = "nagaram";

        bool result = sol.isAnagram(s, t);

        BOOST_CHECK_EQUAL(true, result);
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        std::string s = "rat";
        std::string t = "car";

        bool result = sol.isAnagram(s, t);

        BOOST_CHECK_EQUAL(false, result);
    }
BOOST_AUTO_TEST_SUITE_END()