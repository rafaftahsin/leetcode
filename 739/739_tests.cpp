//
// Created by rafaf.tahsin on 4/24/24.
//
#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "739.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(test_suite_22)

    Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<int> temperatures { 73,74,75,71,69,72,76,73 };

        vector <int> result = sol.dailyTemperatures(temperatures);
        vector <int> expected { 1,1,4,2,1,1,0,0 };

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<int> temperatures { 30,40,50,60};

        vector <int> result = sol.dailyTemperatures(temperatures);
        vector <int> expected { 1,1,1,0 };

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        vector<int> temperatures { 30,60,90 };

        vector <int> result = sol.dailyTemperatures(temperatures);
        vector <int> expected { 1,1,0};

        BOOST_TEST( result == expected );
    }

BOOST_AUTO_TEST_SUITE_END()