#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "155.h"

using namespace leetcode155;

BOOST_AUTO_TEST_SUITE(test_suite_155)

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        MinStack* minStack = new MinStack();
        minStack->push(-2);
        minStack->push(0);
        minStack->push(-3);
        int result = minStack->getMin(); // return -3
        int expected = -3;
        BOOST_TEST( result == expected);

        minStack->pop();

        result = minStack->top();    // return 0
        expected = 0;
        BOOST_TEST( result == expected);


        result = minStack->getMin(); // return -2
        expected = -2;
        BOOST_TEST( result == expected);
    }
BOOST_AUTO_TEST_SUITE_END()