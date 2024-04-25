//
// Created by rafaf.tahsin on 4/25/24.
//

#ifndef LEETCODE_78_H
#define LEETCODE_78_H

#endif //LEETCODE_78_H

using namespace std;

#include "math.h"

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int num_subset = 1 << nums.size();
        for( int i=0; i< num_subset; i++) {
            vector<int> v;
            for( int j=0; j<nums.size(); j++) {
                if(i &  ( 1<<j )) {
                    v.push_back(nums[j]);
                }
            }
            result.push_back(v);
        }
        return result;
    }
};