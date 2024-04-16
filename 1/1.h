#ifndef LEETCODE_1_H
#define LEETCODE_1_H

#endif //LEETCODE_1_H


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::map<int,int> m;

        for( int i=0; i <nums.size(); i++) {
            int lookup_num = target - nums[i];

            if( m.count( nums[i])) {
                std::vector<int>v = {i, m[ nums[i]]};
                return v;
            }

            m[lookup_num] = i;

        }

        return std::vector<int>(1,1);
    }
};
