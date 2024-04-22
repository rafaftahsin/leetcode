#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "20.h"

BOOST_AUTO_TEST_SUITE(test_suite_20)

    leetcode20::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        string s = "()";

        bool result = sol.isValid(s);
        bool expected = true;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        string s = "()[]{}";

        bool result = sol.isValid(s);
        bool expected = true;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        string s = "(]";

        bool result = sol.isValid(s);
        bool expected = false;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_4)
    {
        string s = "[";

        bool result = sol.isValid(s);
        bool expected = false;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_)
    {
        string s = "{[]}";

        bool result = sol.isValid(s);
        bool expected = true;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()