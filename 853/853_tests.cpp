#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "853.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(test_suite)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        int target = 12;
        vector <int > position {10,8,0,5,3};
        vector <int > speed { 2,4,1,1,3};

        int result = sol.carFleet(target, position, speed);
        int expected = 3;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        int target = 10;
        vector <int > position {8,3,7,4,6,5};
        vector <int > speed { 4,4,4,4,4,4 };

        int result = sol.carFleet(target, position, speed);
        int expected = 6;

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        int target = 100;
        vector <int > position { 0,2,4 };
        vector <int > speed { 4,2,1 };

        int result = sol.carFleet(target, position, speed);
        int expected = 1;

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()