#define BOOST_TEST_MAIN

#include "boost/test/included/unit_test.hpp"
#include "49.h"

BOOST_AUTO_TEST_SUITE(test_suite_49)

    leetcode49::Solution sol;

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        vector<string> strs { "eat","tea","tan","ate","nat","bat" };
        vector<vector<string>> expected = { {"bat"}, { "nat","tan" }, {"ate","eat","tea"} };

        vector<vector<string>> result = sol.groupAnagrams(strs);

        BOOST_TEST( result.size() == expected.size() );
    }

    BOOST_AUTO_TEST_CASE(test_case_2)
    {
        vector<string> strs {""};
        vector<vector<string>> expected = { {""} };

        vector<vector<string>> result = sol.groupAnagrams(strs);

        BOOST_TEST( result == expected );
    }

    BOOST_AUTO_TEST_CASE(test_case_3)
    {
        vector<string> strs { "a" };
        vector<vector<string>> expected = { {"a"} };

        vector<vector<string>> result = sol.groupAnagrams(strs);

        BOOST_TEST( result == expected );
    }
BOOST_AUTO_TEST_SUITE_END()