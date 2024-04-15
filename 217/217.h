#ifndef LEETCODE_217_H
#define LEETCODE_217_H
#endif //LEETCODE_217_H

#include "vector"
#include "set"

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int size = nums.size();

        std::set<int> nums_set(nums.begin(), nums.end());

        int set_size = nums_set.size();

        return size != set_size;
    }
};
